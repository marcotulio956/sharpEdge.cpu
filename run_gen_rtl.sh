#!/bin/bash

if [ "$#" -lt 2 ]; then
    echo "Usage: $0 <top_module> <sv_files...>"
    echo "Example:"
    echo "  $0 top rtl/top.sv rtl/alu.sv rtl/controller.sv"
    exit 1
fi

TOP=$1
shift
FILES="$@"

OUT="rtl_${TOP}"

echo "Generating RTL schematic for top module: $TOP"

yosys -p "
read_verilog -sv $FILES
hierarchy -top $TOP
proc; opt; fsm; opt; memory; opt
show -format dot -prefix $OUT
"

dot -Tpng ${OUT}.dot -o ${OUT}.png
dot -Tpdf ${OUT}.dot -o ${OUT}.pdf

echo ""
echo "Generated files:"
echo "  ${OUT}.png"
echo "  ${OUT}.pdf"
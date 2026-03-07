/*
wave create -driver freeze -pattern clock -initialvalue 0 -period 10ps -dutycycle 50 -starttime 0ps -endtime 10000ps sim:/reservation_station/clk
wave create -driver freeze -pattern clock -initialvalue 1 -period 10ps -dutycycle 50 -starttime 0ps -endtime 10ps sim:/reservation_station/rst
wave create -driver freeze -pattern clock -initialvalue 1 -period 100ps -dutycycle 85 -starttime 0ps -endtime 10000ps sim:/reservation_station/write
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 5 -range 2 0 -starttime 0ps -endtime 1000ps sim:/reservation_station/opf
wave create -driver freeze -pattern random -initialvalue {Not Logged} -period 10ps -random_type Uniform -seed 6 -range 4 0 -starttime 0ps -endtime 1000ps sim:/reservation_station/rob_dest
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 5 -starttime 0ps -endtime 1000ps sim:/reservation_station/qj_required
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 5 -starttime 0ps -endtime 1000ps sim:/reservation_station/qk_required
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 8 -range 4 0 -starttime 0ps -endtime 1000ps sim:/reservation_station/qj_rob_entry
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 9 -range 4 0 -starttime 0ps -endtime 1000ps sim:/reservation_station/qk_rob_entry
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 11 -range 31 0 -starttime 0ps -endtime 1000ps sim:/reservation_station/vj_in
wave create -driver freeze -pattern random -initialvalue zzz -period 10ps -random_type Uniform -seed 12 -range 31 0 -starttime 0ps -endtime 1000ps sim:/reservation_station/vk_in

force -freeze sim:/reservation_station/cdb_write 0 0
force -freeze sim:/reservation_station/busy_fu 0000 0
*/
module ready_lines_sel(input [7:0]r, input [3:0] sel0, sel1, sel2, sel3);
	assign sel0[3] = r[0]|r[1]|r[2]|r[3]|r[4]|r[5]|r[6]|r[7];
	assign sel0[2] = r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[5]&~r[3]&~r[2]&~r[1]&~r[0]|r[6]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[3]&~r[2]&~r[1]&~r[0];
	assign sel0[1] = r[2]&~r[1]&~r[0]|r[3]&~r[1]&~r[0]|r[6]&~r[5]&~r[4]&~r[1]&~r[0]|r[7]&~r[5]&~r[4]&~r[1]&~r[0];
	assign sel0[0] = r[2]&~r[1]&~r[0]|r[3]&~r[1]&~r[0]|r[6]&~r[5]&~r[4]&~r[1]&~r[0]|r[7]&~r[5]&~r[4]&~r[1]&~r[0];
	assign sel1[3] = r[1]&r[0]|r[2]&r[0]|r[2]&r[1]|r[3]&r[0]|r[3]&r[1]|r[3]&r[2]|r[4]&r[0]|r[4]&r[1]|r[4]&r[2]|r[4]&r[3]|r[5]&r[0]|r[5]&r[1]|r[5]&r[2]|r[5]&r[3]|r[5]&r[4]|r[6]&r[0]|r[6]&r[1]|r[6]&r[2]|r[6]&r[3]|r[6]&r[4]|r[6]&r[5]|r[7]&r[0]|r[7]&r[1]|r[7]&r[2]|r[7]&r[3]|r[7]&r[4]|r[7]&r[5]|r[7]&r[6];
	assign sel1[2] = r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[5]&~r[3]&~r[2]&~r[1]&r[0]|r[5]&~r[3]&~r[2]&r[1]&~r[0]|r[5]&~r[3]&r[2]&~r[1]&~r[0]|r[5]&r[3]&~r[2]&~r[1]&~r[0]|r[5]&r[4]&~r[3]&~r[2]&~r[1]|r[6]&~r[3]&~r[2]&~r[1]&r[0]|r[6]&~r[3]&~r[2]&r[1]&~r[0]|r[6]&~r[3]&r[2]&~r[1]&~r[0]|r[6]&r[3]&~r[2]&~r[1]&~r[0]|r[6]&r[4]&~r[3]&~r[2]&~r[1]|r[6]&r[5]&~r[3]&~r[2]&~r[1]|r[7]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[4]&~r[3]&~r[2]&~r[1]|r[7]&r[5]&~r[3]&~r[2]&~r[1]|r[7]&r[6]&~r[3]&~r[2]&~r[1];
	assign sel1[1] = r[2]&~r[1]&r[0]|r[2]&r[1]&~r[0]|r[3]&~r[1]&r[0]|r[3]&r[1]&~r[0]|r[3]&r[2]&~r[1]|r[6]&~r[5]&~r[4]&~r[1]&r[0]|r[6]&~r[5]&~r[4]&r[1]&~r[0]|r[6]&~r[5]&~r[4]&r[2]&~r[1]|r[6]&~r[5]&~r[4]&r[3]&~r[1]|r[6]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[6]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[5]&~r[4]&~r[1]&r[0]|r[7]&~r[5]&~r[4]&r[1]&~r[0]|r[7]&~r[5]&~r[4]&r[2]&~r[1]|r[7]&~r[5]&~r[4]&r[3]&~r[1]|r[7]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[1];
	assign sel1[0] = r[1]&r[0]|r[3]&~r[2]&r[0]|r[3]&~r[2]&r[1]|r[3]&r[2]&~r[1]&~r[0]|r[5]&~r[4]&~r[2]&r[0]|r[5]&~r[4]&~r[2]&r[1]|r[5]&~r[4]&r[2]&~r[1]&~r[0]|r[5]&~r[4]&r[3]&~r[2]|r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[6]&~r[4]&~r[2]&r[0]|r[7]&~r[6]&~r[4]&~r[2]&r[1]|r[7]&~r[6]&~r[4]&r[2]&~r[1]&~r[0]|r[7]&~r[6]&~r[4]&r[3]&~r[2]|r[7]&~r[6]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[6]&r[5]&~r[4]&~r[2]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&~r[2]&~r[1]&~r[0];
	assign sel2[3] = r[2]&r[1]&r[0]|r[3]&r[1]&r[0]|r[3]&r[2]&r[0]|r[3]&r[2]&r[1]|r[4]&r[1]&r[0]|r[4]&r[2]&r[0]|r[4]&r[2]&r[1]|r[4]&r[3]&r[0]|r[4]&r[3]&r[1]|r[4]&r[3]&r[2]|r[5]&r[1]&r[0]|r[5]&r[2]&r[0]|r[5]&r[2]&r[1]|r[5]&r[3]&r[0]|r[5]&r[3]&r[1]|r[5]&r[3]&r[2]|r[5]&r[4]&r[0]|r[5]&r[4]&r[1]|r[5]&r[4]&r[2]|r[5]&r[4]&r[3]|r[6]&r[1]&r[0]|r[6]&r[2]&r[0]|r[6]&r[2]&r[1]|r[6]&r[3]&r[0]|r[6]&r[3]&r[1]|r[6]&r[3]&r[2]|r[6]&r[4]&r[0]|r[6]&r[4]&r[1]|r[6]&r[4]&r[2]|r[6]&r[4]&r[3]|r[6]&r[5]&r[0]|r[6]&r[5]&r[1]|r[6]&r[5]&r[2]|r[6]&r[5]&r[3]|r[6]&r[5]&r[4]|r[7]&r[1]&r[0]|r[7]&r[2]&r[0]|r[7]&r[2]&r[1]|r[7]&r[3]&r[0]|r[7]&r[3]&r[1]|r[7]&r[3]&r[2]|r[7]&r[4]&r[0]|r[7]&r[4]&r[1]|r[7]&r[4]&r[2]|r[7]&r[4]&r[3]|r[7]&r[5]&r[0]|r[7]&r[5]&r[1]|r[7]&r[5]&r[2]|r[7]&r[5]&r[3]|r[7]&r[5]&r[4]|r[7]&r[6]&r[0]|r[7]&r[6]&r[1]|r[7]&r[6]&r[2]|r[7]&r[6]&r[3]|r[7]&r[6]&r[4]|r[7]&r[6]&r[5];
	assign sel2[2] = r[4]&~r[3]&~r[2]&r[1]&r[0]|r[4]&~r[3]&r[2]&~r[1]&r[0]|r[4]&~r[3]&r[2]&r[1]&~r[0]|r[4]&r[3]&~r[2]&~r[1]&r[0]|r[4]&r[3]&~r[2]&r[1]&~r[0]|r[4]&r[3]&r[2]&~r[1]&~r[0]|r[5]&~r[3]&~r[2]&r[1]&r[0]|r[5]&~r[3]&r[2]&~r[1]&r[0]|r[5]&~r[3]&r[2]&r[1]&~r[0]|r[5]&r[3]&~r[2]&~r[1]&r[0]|r[5]&r[3]&~r[2]&r[1]&~r[0]|r[5]&r[3]&r[2]&~r[1]&~r[0]|r[5]&r[4]&~r[3]&~r[2]&r[0]|r[5]&r[4]&~r[3]&~r[2]&r[1]|r[5]&r[4]&~r[3]&r[2]&~r[1]|r[5]&r[4]&r[3]&~r[2]&~r[1]|r[6]&~r[3]&~r[2]&r[1]&r[0]|r[6]&~r[3]&r[2]&~r[1]&r[0]|r[6]&~r[3]&r[2]&r[1]&~r[0]|r[6]&r[3]&~r[2]&~r[1]&r[0]|r[6]&r[3]&~r[2]&r[1]&~r[0]|r[6]&r[3]&r[2]&~r[1]&~r[0]|r[6]&r[4]&~r[3]&~r[2]&r[0]|r[6]&r[4]&~r[3]&~r[2]&r[1]|r[6]&r[4]&~r[3]&r[2]&~r[1]|r[6]&r[4]&r[3]&~r[2]&~r[1]|r[6]&r[5]&~r[3]&~r[2]&r[0]|r[6]&r[5]&~r[3]&~r[2]&r[1]|r[6]&r[5]&~r[3]&r[2]&~r[1]|r[6]&r[5]&r[3]&~r[2]&~r[1]|r[6]&r[5]&r[4]&~r[1]&~r[0]|r[7]&~r[3]&~r[2]&r[1]&r[0]|r[7]&~r[3]&r[2]&~r[1]&r[0]|r[7]&~r[3]&r[2]&r[1]&~r[0]|r[7]&r[3]&~r[2]&~r[1]&r[0]|r[7]&r[3]&~r[2]&r[1]&~r[0]|r[7]&r[3]&r[2]&~r[1]&~r[0]|r[7]&r[4]&~r[3]&~r[2]&r[0]|r[7]&r[4]&~r[3]&~r[2]&r[1]|r[7]&r[4]&~r[3]&r[2]&~r[1]|r[7]&r[4]&r[3]&~r[2]&~r[1]|r[7]&r[5]&~r[3]&~r[2]&r[0]|r[7]&r[5]&~r[3]&~r[2]&r[1]|r[7]&r[5]&~r[3]&r[2]&~r[1]|r[7]&r[5]&r[3]&~r[2]&~r[1]|r[7]&r[5]&r[4]&~r[3]&~r[2]|r[7]&r[6]&~r[3]&~r[2]&r[0]|r[7]&r[6]&~r[3]&~r[2]&r[1]|r[7]&r[6]&~r[3]&r[2]&~r[1]|r[7]&r[6]&r[3]&~r[2]&~r[1]|r[7]&r[6]&r[4]&~r[3]&~r[2]|r[7]&r[6]&r[5]&~r[3]&~r[0];
	assign sel2[1] = r[2]&r[1]&r[0]|r[3]&r[1]&r[0]|r[3]&r[2]&r[0]|r[3]&r[2]&r[1]|r[6]&~r[5]&~r[4]&r[1]&r[0]|r[6]&~r[5]&~r[4]&r[2]&r[0]|r[6]&~r[5]&~r[4]&r[2]&r[1]|r[6]&~r[5]&~r[4]&r[3]&r[0]|r[6]&~r[5]&~r[4]&r[3]&r[1]|r[6]&~r[5]&~r[4]&r[3]&r[2]|r[6]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[6]&~r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[6]&~r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[6]&~r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[6]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[6]&r[5]&~r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[6]&r[5]&~r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[6]&r[5]&~r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[6]&r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[5]&~r[4]&r[1]&r[0]|r[7]&~r[5]&~r[4]&r[2]&r[0]|r[7]&~r[5]&~r[4]&r[2]&r[1]|r[7]&~r[5]&~r[4]&r[3]&r[0]|r[7]&~r[5]&~r[4]&r[3]&r[1]|r[7]&~r[5]&~r[4]&r[3]&r[2]|r[7]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&~r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&~r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&~r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&r[5]&~r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&r[5]&~r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[5]&~r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&r[0]|r[7]&r[6]&~r[5]&~r[4]&r[1]|r[7]&r[6]&~r[5]&~r[4]&r[2]|r[7]&r[6]&~r[5]&~r[4]&r[3]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&~r[1];
	assign sel2[0] = r[3]&~r[2]&r[1]&r[0]|r[3]&r[2]&~r[1]&r[0]|r[3]&r[2]&r[1]&~r[0]|r[5]&~r[4]&~r[2]&r[1]&r[0]|r[5]&~r[4]&r[2]&~r[1]&r[0]|r[5]&~r[4]&r[2]&r[1]&~r[0]|r[5]&~r[4]&r[3]&~r[2]&r[0]|r[5]&~r[4]&r[3]&~r[2]&r[1]|r[5]&~r[4]&r[3]&r[2]&~r[1]|r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[6]&~r[4]&~r[2]&r[1]&r[0]|r[7]&~r[6]&~r[4]&r[2]&~r[1]&r[0]|r[7]&~r[6]&~r[4]&r[2]&r[1]&~r[0]|r[7]&~r[6]&~r[4]&r[3]&~r[2]&r[0]|r[7]&~r[6]&~r[4]&r[3]&~r[2]&r[1]|r[7]&~r[6]&~r[4]&r[3]&r[2]&~r[1]|r[7]&~r[6]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&~r[6]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&~r[6]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&~r[6]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[6]&r[5]&~r[4]&~r[2]&r[0]|r[7]&~r[6]&r[5]&~r[4]&~r[2]&r[1]|r[7]&~r[6]&r[5]&~r[4]&r[2]&~r[1]|r[7]&~r[6]&r[5]&~r[4]&r[3]&~r[2]|r[7]&~r[6]&r[5]&r[4]&~r[3]&~r[2]&~r[1]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&~r[0];
	assign sel2[0] = r[3]&~r[2]&r[1]&r[0]|r[3]&r[2]&~r[1]&r[0]|r[3]&r[2]&r[1]&~r[0]|r[5]&~r[4]&~r[2]&r[1]&r[0]|r[5]&~r[4]&r[2]&~r[1]&r[0]|r[5]&~r[4]&r[2]&r[1]&~r[0]|r[5]&~r[4]&r[3]&~r[2]&r[0]|r[5]&~r[4]&r[3]&~r[2]&r[1]|r[5]&~r[4]&r[3]&r[2]&~r[1]|r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[6]&~r[4]&~r[2]&r[1]&r[0]|r[7]&~r[6]&~r[4]&r[2]&~r[1]&r[0]|r[7]&~r[6]&~r[4]&r[2]&r[1]&~r[0]|r[7]&~r[6]&~r[4]&r[3]&~r[2]&r[0]|r[7]&~r[6]&~r[4]&r[3]&~r[2]&r[1]|r[7]&~r[6]&~r[4]&r[3]&r[2]&~r[1]|r[7]&~r[6]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&~r[6]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&~r[6]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&~r[6]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[6]&r[5]&~r[4]&~r[2]&r[0]|r[7]&~r[6]&r[5]&~r[4]&~r[2]&r[1]|r[7]&~r[6]&r[5]&~r[4]&r[2]&~r[1]|r[7]&~r[6]&r[5]&~r[4]&r[3]&~r[2]|r[7]&~r[6]&r[5]&r[4]&~r[3]&~r[2]&~r[1]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&~r[0];
	assign sel3[3] = r[3]&r[2]&r[1]&r[0]|r[4]&r[2]&r[1]&r[0]|r[4]&r[3]&r[1]&r[0]|r[4]&r[3]&r[2]&r[0]|r[4]&r[3]&r[2]&r[1]|r[5]&r[2]&r[1]&r[0]|r[5]&r[3]&r[1]&r[0]|r[5]&r[3]&r[2]&r[0]|r[5]&r[3]&r[2]&r[1]|r[5]&r[4]&r[1]&r[0]|r[5]&r[4]&r[2]&r[0]|r[5]&r[4]&r[2]&r[1]|r[5]&r[4]&r[3]&r[0]|r[5]&r[4]&r[3]&r[1]|r[5]&r[4]&r[3]&r[2]|r[6]&r[2]&r[1]&r[0]|r[6]&r[3]&r[1]&r[0]|r[6]&r[3]&r[2]&r[0]|r[6]&r[3]&r[2]&r[1]|r[6]&r[4]&r[1]&r[0]|r[6]&r[4]&r[2]&r[0]|r[6]&r[4]&r[2]&r[1]|r[6]&r[4]&r[3]&r[0]|r[6]&r[4]&r[3]&r[1]|r[6]&r[4]&r[3]&r[2]|r[6]&r[5]&r[1]&r[0]|r[6]&r[5]&r[2]&r[0]|r[6]&r[5]&r[2]&r[1]|r[6]&r[5]&r[3]&r[0]|r[6]&r[5]&r[3]&r[1]|r[6]&r[5]&r[3]&r[2]|r[6]&r[5]&r[4]&r[0]|r[6]&r[5]&r[4]&r[1]|r[6]&r[5]&r[4]&r[2]|r[6]&r[5]&r[4]&r[3]|r[7]&r[2]&r[1]&r[0]|r[7]&r[3]&r[1]&r[0]|r[7]&r[3]&r[2]&r[0]|r[7]&r[3]&r[2]&r[1]|r[7]&r[4]&r[1]&r[0]|r[7]&r[4]&r[2]&r[0]|r[7]&r[4]&r[2]&r[1]|r[7]&r[4]&r[3]&r[0]|r[7]&r[4]&r[3]&r[1]|r[7]&r[4]&r[3]&r[2]|r[7]&r[5]&r[1]&r[0]|r[7]&r[5]&r[2]&r[0]|r[7]&r[5]&r[2]&r[1]|r[7]&r[5]&r[3]&r[0]|r[7]&r[5]&r[3]&r[1]|r[7]&r[5]&r[3]&r[2]|r[7]&r[5]&r[4]&r[0]|r[7]&r[5]&r[4]&r[1]|r[7]&r[5]&r[4]&r[2]|r[7]&r[5]&r[4]&r[3]|r[7]&r[6]&r[1]&r[0]|r[7]&r[6]&r[2]&r[0]|r[7]&r[6]&r[2]&r[1]|r[7]&r[6]&r[3]&r[0]|r[7]&r[6]&r[3]&r[1]|r[7]&r[6]&r[3]&r[2]|r[7]&r[6]&r[4]&r[0]|r[7]&r[6]&r[4]&r[1]|r[7]&r[6]&r[4]&r[2]|r[7]&r[6]&r[4]&r[3]|r[7]&r[6]&r[5]&r[0]|r[7]&r[6]&r[5]&r[1]|r[7]&r[6]&r[5]&r[2]|r[7]&r[6]&r[5]&r[3]|r[7]&r[6]&r[5]&r[4];
	assign sel3[2] = r[4]&~r[3]&r[2]&r[1]&r[0]|r[4]&r[3]&~r[2]&r[1]&r[0]|r[4]&r[3]&r[2]&~r[1]&r[0]|r[4]&r[3]&r[2]&r[1]&~r[0]|r[5]&~r[3]&r[2]&r[1]&r[0]|r[5]&r[3]&~r[2]&r[1]&r[0]|r[5]&r[3]&r[2]&~r[1]&r[0]|r[5]&r[3]&r[2]&r[1]&~r[0]|r[5]&r[4]&~r[3]&r[1]&r[0]|r[5]&r[4]&~r[3]&r[2]&r[0]|r[5]&r[4]&~r[3]&r[2]&r[1]|r[5]&r[4]&r[3]&~r[2]&r[0]|r[5]&r[4]&r[3]&~r[2]&r[1]|r[5]&r[4]&r[3]&r[2]&~r[1]|r[6]&~r[3]&r[2]&r[1]&r[0]|r[6]&r[3]&~r[2]&r[1]&r[0]|r[6]&r[3]&r[2]&~r[1]&r[0]|r[6]&r[3]&r[2]&r[1]&~r[0]|r[6]&r[4]&~r[3]&r[1]&r[0]|r[6]&r[4]&~r[3]&r[2]&r[0]|r[6]&r[4]&~r[3]&r[2]&r[1]|r[6]&r[4]&r[3]&~r[2]&r[0]|r[6]&r[4]&r[3]&~r[2]&r[1]|r[6]&r[4]&r[3]&r[2]&~r[1]|r[6]&r[5]&~r[3]&r[1]&r[0]|r[6]&r[5]&~r[3]&r[2]&r[0]|r[6]&r[5]&~r[3]&r[2]&r[1]|r[6]&r[5]&r[3]&~r[2]&r[0]|r[6]&r[5]&r[3]&~r[2]&r[1]|r[6]&r[5]&r[3]&r[2]&~r[1]|r[6]&r[5]&r[4]&~r[3]&r[0]|r[6]&r[5]&r[4]&~r[3]&r[1]|r[6]&r[5]&r[4]&~r[3]&r[2]|r[6]&r[5]&r[4]&r[3]&~r[2]|r[7]&~r[3]&r[2]&r[1]&r[0]|r[7]&r[3]&~r[2]&r[1]&r[0]|r[7]&r[3]&r[2]&~r[1]&r[0]|r[7]&r[3]&r[2]&r[1]&~r[0]|r[7]&r[4]&~r[3]&r[1]&r[0]|r[7]&r[4]&~r[3]&r[2]&r[0]|r[7]&r[4]&~r[3]&r[2]&r[1]|r[7]&r[4]&r[3]&~r[2]&r[0]|r[7]&r[4]&r[3]&~r[2]&r[1]|r[7]&r[4]&r[3]&r[2]&~r[1]|r[7]&r[5]&~r[3]&r[1]&r[0]|r[7]&r[5]&~r[3]&r[2]&r[0]|r[7]&r[5]&~r[3]&r[2]&r[1]|r[7]&r[5]&r[3]&~r[2]&r[0]|r[7]&r[5]&r[3]&~r[2]&r[1]|r[7]&r[5]&r[3]&r[2]&~r[1]|r[7]&r[5]&r[4]&~r[3]&r[0]|r[7]&r[5]&r[4]&~r[3]&r[1]|r[7]&r[5]&r[4]&~r[3]&r[2]|r[7]&r[5]&r[4]&r[3]&~r[2]|r[7]&r[6]&~r[3]&r[1]&r[0]|r[7]&r[6]&~r[3]&r[2]&r[0]|r[7]&r[6]&~r[3]&r[2]&r[1]|r[7]&r[6]&r[3]&~r[2]&r[0]|r[7]&r[6]&r[3]&~r[2]&r[1]|r[7]&r[6]&r[3]&r[2]&~r[1]|r[7]&r[6]&r[4]&~r[3]&r[0]|r[7]&r[6]&r[4]&~r[3]&r[1]|r[7]&r[6]&r[4]&r[2]&~r[1]|r[7]&r[6]&r[4]&r[3]&~r[2]|r[7]&r[6]&r[5]&~r[3]&r[0]|r[7]&r[6]&r[5]&~r[3]&r[1]|r[7]&r[6]&r[5]&~r[3]&r[2]|r[7]&r[6]&r[5]&r[3]&~r[2]|r[7]&r[6]&r[5]&r[4]&~r[3];
	assign sel3[1] = r[3]&r[2]&r[1]&r[0]|r[6]&~r[5]&~r[4]&r[2]&r[1]&r[0]|r[6]&~r[5]&~r[4]&r[3]&r[1]&r[0]|r[6]&~r[5]&~r[4]&r[3]&r[2]&r[0]|r[6]&~r[5]&~r[4]&r[3]&r[2]&r[1]|r[6]&~r[5]&r[4]&~r[3]&~r[2]&r[1]&r[0]|r[6]&~r[5]&r[4]&~r[3]&r[2]&~r[1]&r[0]|r[6]&~r[5]&r[4]&~r[3]&r[2]&r[1]&~r[0]|r[6]&~r[5]&r[4]&r[3]&~r[2]&~r[1]&r[0]|r[6]&~r[5]&r[4]&r[3]&~r[2]&r[1]&~r[0]|r[6]&~r[5]&r[4]&r[3]&r[2]&~r[1]&~r[0]|r[6]&r[5]&~r[4]&~r[3]&~r[2]&r[1]&r[0]|r[6]&r[5]&~r[4]&~r[3]&r[2]&~r[1]&r[0]|r[6]&r[5]&~r[4]&~r[3]&r[2]&r[1]&~r[0]|r[6]&r[5]&~r[4]&r[3]&~r[2]&~r[1]&r[0]|r[6]&r[5]&~r[4]&r[3]&~r[2]&r[1]&~r[0]|r[6]&r[5]&~r[4]&r[3]&r[2]&~r[1]&~r[0]|r[6]&r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[6]&r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[6]&r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[6]&r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&~r[5]&~r[4]&r[2]&r[1]&r[0]|r[7]&~r[5]&~r[4]&r[3]&r[1]&r[0]|r[7]&~r[5]&~r[4]&r[3]&r[2]&r[0]|r[7]&~r[5]&~r[4]&r[3]&r[2]&r[1]|r[7]&~r[5]&r[4]&~r[3]&~r[2]&r[1]&r[0]|r[7]&~r[5]&r[4]&~r[3]&r[2]&~r[1]&r[0]|r[7]&~r[5]&r[4]&~r[3]&r[2]&r[1]&~r[0]|r[7]&~r[5]&r[4]&r[3]&~r[2]&~r[1]&r[0]|r[7]&~r[5]&r[4]&r[3]&~r[2]&r[1]&~r[0]|r[7]&~r[5]&r[4]&r[3]&r[2]&~r[1]&~r[0]|r[7]&r[5]&~r[4]&~r[3]&~r[2]&r[1]&r[0]|r[7]&r[5]&~r[4]&~r[3]&r[2]&~r[1]&r[0]|r[7]&r[5]&~r[4]&~r[3]&r[2]&r[1]&~r[0]|r[7]&r[5]&~r[4]&r[3]&~r[2]&~r[1]&r[0]|r[7]&r[5]&~r[4]&r[3]&~r[2]&r[1]&~r[0]|r[7]&r[5]&~r[4]&r[3]&r[2]&~r[1]&~r[0]|r[7]&r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&r[1]&r[0]|r[7]&r[6]&~r[5]&~r[4]&r[2]&r[0]|r[7]&r[6]&~r[5]&~r[4]&r[2]&r[1]|r[7]&r[6]&~r[5]&~r[4]&r[3]&r[0]|r[7]&r[6]&~r[5]&~r[4]&r[3]&r[1]|r[7]&r[6]&~r[5]&~r[4]&r[3]&r[2]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&r[0]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&r[1]|r[7]&r[6]&~r[5]&r[4]&~r[3]&r[2]&~r[1]|r[7]&r[6]&~r[5]&r[4]&r[3]&~r[2]&~r[1]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&r[0]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&r[1]|r[7]&r[6]&r[5]&~r[4]&~r[3]&r[2]&~r[1]|r[7]&r[6]&r[5]&~r[4]&r[3]&~r[2]&~r[1]|r[7]&r[6]&r[5]&r[4]&~r[3]&~r[2]&~r[1];
	assign sel3[0] = r[3]&r[2]&r[1]&r[0]|r[5]&~r[4]&r[2]&r[1]&r[0]|r[5]&~r[4]&r[3]&r[1]&r[0]|r[5]&~r[4]&r[3]&r[2]&r[0]|r[5]&~r[4]&r[3]&r[2]&r[1]|r[5]&r[4]&~r[3]&~r[2]&r[1]&r[0]|r[5]&r[4]&~r[3]&r[2]&~r[1]&r[0]|r[5]&r[4]&~r[3]&r[2]&r[1]&~r[0]|r[5]&r[4]&r[3]&~r[2]&~r[1]&r[0]|r[5]&r[4]&r[3]&~r[2]&r[1]&~r[0]|r[5]&r[4]&r[3]&r[2]&~r[1]&~r[0]|r[7]&~r[6]&~r[4]&r[2]&r[1]&r[0]|r[7]&~r[6]&~r[4]&r[3]&r[1]&r[0]|r[7]&~r[6]&~r[4]&r[3]&r[2]&r[0]|r[7]&~r[6]&~r[4]&r[3]&r[2]&r[1]|r[7]&~r[6]&r[4]&~r[3]&~r[2]&r[1]&r[0]|r[7]&~r[6]&r[4]&~r[3]&r[2]&~r[1]&r[0]|r[7]&~r[6]&r[4]&~r[3]&r[2]&r[1]&~r[0]|r[7]&~r[6]&r[4]&r[3]&~r[2]&~r[1]&r[0]|r[7]&~r[6]&r[4]&r[3]&~r[2]&r[1]&~r[0]|r[7]&~r[6]&r[4]&r[3]&r[2]&~r[1]&~r[0]|r[7]&~r[6]&r[5]&~r[4]&r[1]&r[0]|r[7]&~r[6]&r[5]&~r[4]&r[2]&r[0]|r[7]&~r[6]&r[5]&~r[4]&r[2]&r[1]|r[7]&~r[6]&r[5]&~r[4]&r[3]&r[0]|r[7]&~r[6]&r[5]&~r[4]&r[3]&r[1]|r[7]&~r[6]&r[5]&~r[4]&r[3]&r[2]|r[7]&~r[6]&r[5]&r[4]&~r[3]&~r[2]&r[0]|r[7]&~r[6]&r[5]&r[4]&~r[3]&~r[2]&r[1]|r[7]&~r[6]&r[5]&r[4]&~r[3]&r[2]&~r[1]|r[7]&~r[6]&r[5]&r[4]&r[3]&~r[2]&~r[1]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&~r[2]&r[1]&r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&r[2]&~r[1]&r[0]|r[7]&r[6]&~r[5]&~r[4]&~r[3]&r[2]&r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&r[3]&~r[2]&~r[1]&r[0]|r[7]&r[6]&~r[5]&~r[4]&r[3]&~r[2]&r[1]&~r[0]|r[7]&r[6]&~r[5]&~r[4]&r[3]&r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&r[6]&~r[5]&r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&r[6]&~r[5]&r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[6]&~r[5]&r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&~r[1]&r[0]|r[7]&r[6]&r[5]&~r[4]&~r[3]&~r[2]&r[1]&~r[0]|r[7]&r[6]&r[5]&~r[4]&~r[3]&r[2]&~r[1]&~r[0]|r[7]&r[6]&r[5]&~r[4]&r[3]&~r[2]&~r[1]&~r[0]|r[7]&r[6]&r[5]&r[4]&~r[3]&~r[2]&~r[1]&~r[0];
endmodule
module reservation_station 	#(
		parameter OPF_SIZE=3, ROB_ADRS_SIZE=5,
		V_SIZE=32, RS_ADRS_SIZE=3
	)(	
		input clk,write,rst,

		input [OPF_SIZE-1:0] opf,
		input [ROB_ADRS_SIZE-1:0] rob_dest,
		input qj_required, qk_required,
		input [ROB_ADRS_SIZE-1:0] qj_rob_entry,
		input [ROB_ADRS_SIZE-1:0] qk_rob_entry,
		input [V_SIZE-1:0] vj_in, vk_in,

		input cdb_write,
		input [ROB_ADRS_SIZE-1:0] cdb_rob_adrs,
		input [V_SIZE-1:0] cdb_snooped_value,
		
		input [3:0] busy_fu,
		//-- 
		output valid0, valid1, valid2, valid3,
		output [RS_OUT_LINE_SIZE-1:0] line_out1, line_out2, line_out3, line_out4,
		output full
);
	localparam RS_LINES=2**RS_ADRS_SIZE, RS_OUT_LINE_SIZE = OPF_SIZE + ROB_ADRS_SIZE + 2*V_SIZE; 	

	integer i;

	reg [RS_LINES-1:0] busy;
	reg [OPF_SIZE-1:0] opfunction [0:RS_LINES-1];
	reg [ROB_ADRS_SIZE-1:0] rob_entry [0:RS_LINES-1];//holds the inst. destination entry in rob
	reg [RS_LINES-1:0] qj_using;//0: value v is present; 1: not present, ROB entry indicateted by q
	reg [RS_LINES-1:0] qk_using;	
	reg [ROB_ADRS_SIZE-1:0] qj [0:RS_LINES-1];
	reg [ROB_ADRS_SIZE-1:0] qk [0:RS_LINES-1];
	reg [V_SIZE-1:0] vj [0:RS_LINES-1];
	reg [V_SIZE-1:0] vk [0:RS_LINES-1];

	wire [2:0] write_sel; // holds, in binary, the index of the first non busy slot in the RS 
	wire [3:0] readylines_sel0, readylines_sel1, readylines_sel2, readylines_sel3; // 3:0 sel ready slot, 4th bit = valid sel 

	wire [7:0] ready; // vector bit, all the slots with ready values

	assign write_sel[2] = busy[3] & busy[2] & busy[1] & busy[0];
	assign write_sel[1] = ~busy[3] & busy[1] & busy[0] | ~busy[2] & busy[1] & busy[0] | busy[5] & busy[4] & busy[1] & busy[0];
	assign write_sel[0] = ~busy[1] & busy[0] | ~busy[3] & busy[2] & busy[0] | ~busy[5] & busy[4] & busy[2] & busy[0] | busy[6] & busy[4] & busy[2] & busy[0];

	assign ready = busy & ~qj_using & ~qk_using;  

	assign valid0 = ~busy_fu[0] & readylines_sel0[3];
	assign valid1 = ~busy_fu[1] & readylines_sel1[3];
	assign valid2 = ~busy_fu[2] & readylines_sel2[3];
	assign valid3 = ~busy_fu[3] & readylines_sel3[3];
	assign line_out1 = {opfunction[readylines_sel0[2:0]],rob_entry[readylines_sel0[2:0]],vj[readylines_sel0[2:0]],vk[readylines_sel0[2:0]]};
	assign line_out2 = {opfunction[readylines_sel1[2:0]],rob_entry[readylines_sel1[2:0]],vj[readylines_sel1[2:0]],vk[readylines_sel1[2:0]]};
	assign line_out3 = {opfunction[readylines_sel2[2:0]],rob_entry[readylines_sel2[2:0]],vj[readylines_sel2[2:0]],vk[readylines_sel2[2:0]]};
	assign line_out4 = {opfunction[readylines_sel3[2:0]],rob_entry[readylines_sel3[2:0]],vj[readylines_sel3[2:0]],vk[readylines_sel3[2:0]]};
	assign full = &busy;

	ready_lines_sel rls(ready, readylines_sel0, readylines_sel1, readylines_sel2, readylines_sel3);

	always @(clk) begin //RS is filled every half clock by erasing the posedge
		if(rst == 1'b1)begin
			busy <= 0; //important
			qj_using <= 0; //important
			qk_using <= 0; //important
		end	else if(full==1'b0 && write==1'b1)begin//acomodating instruction
			busy[write_sel] <= 1'b1;
			opfunction[write_sel] <= opf;
			rob_entry[write_sel] <= rob_dest;

			qj[write_sel] <= qj_rob_entry;
			if(cdb_write==1 && cdb_rob_adrs==qj_rob_entry)begin//forwarding vj value being writen by the cdb at the same clkedge as the instruction comes in 
				qj_using[write_sel] <= 0;	
				vj[write_sel] <= cdb_snooped_value;
			end	else begin
				vj[write_sel] <= vj_in;
				qj_using[write_sel] <= qj_required;	
			end

			qk[write_sel] <= qk_rob_entry;
			if(cdb_write==1 && cdb_rob_adrs==qk_rob_entry)begin//fowarding vk
				qk_using[write_sel] <= 0;	
				vk[write_sel] <= cdb_snooped_value;
			end	else begin
				vk[write_sel] <= vk_in;
				qk_using[write_sel] <= qk_required;
			end
		end
	end 
	always @(posedge clk) begin
		if(rst==0) begin
			for(i=0; i<RS_LINES; i=i+1)begin 
				//CDB suppling Values.
				if(qj_using[i]==1'b1 && qj[i]==cdb_rob_adrs && cdb_write==1'b1)begin 
					vj[i] <= cdb_snooped_value;
					qj_using[i] <= 1'b0;
				end
				if(qk_using[i]==1'b1 && qk[i]==cdb_rob_adrs && cdb_write==1'b1)begin
					vk[i] <= cdb_snooped_value;
					qk_using[i] <= 1'b0;
				end
			end
		end
	end
endmodule
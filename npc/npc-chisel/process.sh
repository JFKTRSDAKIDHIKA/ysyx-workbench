sed -i '/^\/\/ ----- 8< ----- FILE "firrtl_black_box_resource_files.f" ----- 8< -----/,/^UartRaw.v$/d' ../vsrc/generated/Core.sv

sed -i 's/\(io_master_aw\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_master_w\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_master_b\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_master_ar\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_master_r\)_/\1/g' ../vsrc/generated/Core.sv

sed -i 's/\(io_slave_aw\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_slave_w\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_slave_b\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_slave_ar\)_/\1/g' ../vsrc/generated/Core.sv
sed -i 's/\(io_slave_r\)_/\1/g' ../vsrc/generated/Core.sv
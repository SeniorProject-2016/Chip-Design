
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name SeniorProject -dir "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/planAhead_run_1" -part xc7a100tcsg324-3
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/chip.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project} }
set_property target_constrs_file "chip.ucf" [current_fileset -constrset]
add_files [list {chip.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/chip.ncd"
if {[catch {read_twx -name results_1 -file "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/chip.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/chip.twx\": $eInfo"
}

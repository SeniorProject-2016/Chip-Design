
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name SeniorProject -dir "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/planAhead_run_3" -part xc7a100tcsg324-1
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project/chip.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Zachary/Documents/GitHub/Chip-Design/proj_asic/rtl/chip/project} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "chip.ucf" [current_fileset -constrset]
add_files [list {chip.ucf}] -fileset [get_property constrset [current_run]]
link_design

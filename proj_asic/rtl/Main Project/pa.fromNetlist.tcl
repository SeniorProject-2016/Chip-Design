
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name SeniorProject -dir "C:/Users/Zachary/Desktop/Main Project/planAhead_run_1" -part xc7a100tcsg324-1
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Zachary/Desktop/Main Project/chip.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Zachary/Desktop/Main Project} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "chip.ucf" [current_fileset -constrset]
add_files [list {chip.ucf}] -fileset [get_property constrset [current_run]]
link_design

/*
Team 5561 Shuffleboard PID code

Writen by - Chris & Wes 2024

*/
// #ifdef Shuffleboard
#include <frc/shuffleboard/Shuffleboard.h>
#include "Shuffleboard.hpp"
#include <networktables/NetworkTable.h>

Shuffleboard_PID Shuffleboard_DrivePID;
Shuffleboard_PID Shuffleboard_SteerPID;

void shuffleboard_init(){
frc::ShuffleboardTab& Front_Left = frc::Shuffleboard::GetTab("Drive PID's");
nt::GenericEntry* P_DrivePID_entry = Front_Left.Add("P", 0.0).GetEntry();
nt::GenericEntry* I_DrivePID_entry = Front_Left.Add("I", 0.0).GetEntry();
nt::GenericEntry* D_DrivePID_entry = Front_Left.Add("D", 0.0).GetEntry();
nt::GenericEntry* P_LL_DrivePID_entry = Front_Left.Add("P LL", 0.0).GetEntry();
nt::GenericEntry* P_UL_DrivePID_entry = Front_Left.Add("P UL", 0.0).GetEntry();
nt::GenericEntry* I_LL_DrivePID_entry = Front_Left.Add("I LL", 0.0).GetEntry();
nt::GenericEntry* I_UL_DrivePID_entry = Front_Left.Add("I UL", 0.0).GetEntry();
nt::GenericEntry* D_LL_DrivePID_entry = Front_Left.Add("D LL", 0.0).GetEntry();
nt::GenericEntry* D_UL_DrivePID_entry = Front_Left.Add("D UL", 0.0).GetEntry();
nt::GenericEntry* UL_DrivePID_entry = Front_Left.Add("UL", 0.0).GetEntry();
nt::GenericEntry* LL_DrivePID_entry = Front_Left.Add("LL", 0.0).GetEntry();
nt::GenericEntry* Iz_DrivePID_entry = Front_Left.Add("Iz", 0.0).GetEntry();
nt::GenericEntry* FF_DrivePID_entry = Front_Left.Add("FF", 0.0).GetEntry();
 
frc::ShuffleboardTab& Front_Left_steer = frc::Shuffleboard::GetTab("Steer PID's");
nt::GenericEntry* P_SteerPID_entry = Front_Left_steer.Add("P", 0.0).GetEntry(); 
nt::GenericEntry* I_SteerPID_entry = Front_Left_steer.Add("I", 0.0).GetEntry(); 
nt::GenericEntry* D_SteerPID_entry = Front_Left_steer.Add("D", 0.0).GetEntry(); 
nt::GenericEntry* P_LL_SteerPID_entry = Front_Left_steer.Add("P LL", 0.0).GetEntry(); 
nt::GenericEntry* P_UL_SteerPID_entry = Front_Left_steer.Add("P UL", 0.0).GetEntry(); 
nt::GenericEntry* I_LL_SteerPID_entry = Front_Left_steer.Add("I LL", 0.0).GetEntry(); 
nt::GenericEntry* I_UL_SteerPID_entry = Front_Left_steer.Add("I UL", 0.0).GetEntry(); 
nt::GenericEntry* D_LL_SteerPID_entry = Front_Left_steer.Add("D LL", 0.0).GetEntry(); 
nt::GenericEntry* D_UL_SteerPID_entry = Front_Left_steer.Add("D UL", 0.0).GetEntry(); 
nt::GenericEntry* LL_SteerPID_entry = Front_Left_steer.Add("LL", 0.0).GetEntry(); 
nt::GenericEntry* UL_SteerPID_entry = Front_Left_steer.Add("UL", 0.0).GetEntry(); 
nt::GenericEntry* Iz_SteerPID_entry = Front_Left_steer.Add("Iz", 0.0).GetEntry(); 
nt::GenericEntry* FF_SteerPID_entry = Front_Left_steer.Add("FF", 0.0).GetEntry(); 
 
 
Shuffleboard_DrivePID.P = P_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.I = I_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.D = D_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.P_UL = P_UL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.P_LL = P_LL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.I_UL = I_UL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.I_LL = I_LL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.D_UL = D_UL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.D_LL = D_LL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.UL = UL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.LL = LL_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.Iz = Iz_DrivePID_entry->GetDouble(0.0);
Shuffleboard_DrivePID.FF = FF_DrivePID_entry->GetDouble(0.0);

Shuffleboard_SteerPID.P = P_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.I = I_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.D = D_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.P_UL = P_UL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.P_LL = P_LL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.I_UL = I_UL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.I_LL = I_LL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.D_UL = D_UL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.D_LL = D_LL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.UL = UL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.LL = LL_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.Iz = Iz_SteerPID_entry->GetDouble(0.0);
Shuffleboard_SteerPID.FF = FF_SteerPID_entry->GetDouble(0.0);
}

// #endif
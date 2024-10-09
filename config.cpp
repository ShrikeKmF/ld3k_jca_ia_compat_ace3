class CfgPatches
{
    class ld3k_jca_ia_compat_ace3
    {
        requiredAddons[]=
        {
            "Weapons_F_JCA_IA",
            "Weapons_F_JCA_IA_Accessories",
            "Weapons_F_JCA_IA_LongRangeRifles_AWM",
            "Weapons_F_JCA_IA_Pistols_P226",
            "Weapons_F_JCA_IA_Pistols_P320",
            "Weapons_F_JCA_IA_Rifles_M4A1",
            "Weapons_F_JCA_IA_Rifles_M4A4",
            "Weapons_F_JCA_IA_Rifles_SR10",
            "Weapons_F_JCA_IA_Rifles_SR25",
            "Weapons_F_JCA_IA_SMGs_MP5"
        };
        requiredversion=0.1;
        units[]={};
        weapons[]={};
    };
};
class CfgAmmo
{
    class BulletBase;
    class B_338_Ball;
    // JCA Bullets inherited from vanilla class B_9x21_Ball. To avoid all conflict with other mod, all JCA bullets with JCA as prefixe.
    // class B_9x21_Ball: BulletBase from official BI tool All-in-one Config Arma3 2.17.152041 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_9x19_Ball_P320C_FMJ: BulletBase // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 115gr Elite Ball FMJ https://www.sigsauer.com/9mm-115gr-elite-ball-fmj.html
        ACE_bulletMass=7.452; // 115gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.159}; // calculated ballistic coefficient from Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={362}; // at 21°C (70°F: Temp vs MV chart zero), 361m/s (1185fps) at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P320 initSpeed, 1185fps barrel length 4.0" ± 1/16" (± 3.9375", 4.0625") https://www.sigsauer.com/9mm-115gr-elite-ball-fmj.html,
        ACE_barrelLengths[]={99}; // 3.9" P320 Compact barrel length https://www.sigsauer.com/p320-compact.html
        hit=4.4; // B_9x21_Ball 5, 486 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=361; // JCA_15Rnd_9x19_P320C_FMJ_Mag initSpeed
        airFriction=-0.00187745; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_P320C_JHP: JCA_B_9x19_Ball_P320C_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.176}; // calculated ballistic coefficient from Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={301}; // at 21°C (70°F: Temp vs MV chart zero), 300m/s (985fps) at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P320 initSpeed, 985fps barrel length 4.0" ± 1/16" (± 3.9375", 4.0625") https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_barrelLengths[]={99}; // 3.9" P320 Compact barrel length https://www.sigsauer.com/p320-compact.html
        hit=6.9; // B_9x21_Ball 5, 429 Joules
        typicalSpeed=300; // JCA_15Rnd_9x19_P320C_JHP_Mag initSpeed
        airFriction=-0.00115136; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Green: JCA_B_9x19_Ball_P320C_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Red: JCA_B_9x19_Ball_P320C_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_Yellow: JCA_B_9x19_Ball_P320C_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P320C_Tracer_IR: JCA_B_9x19_Ball_P320C_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_P226_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.194}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127.0,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // at 21°C (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel - 378m/s (1240fps) 4.4" (112mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P226 initSpeed
        hit=4.8; // B_9x21_Ball 5, 574 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=378; // JCA_15Rnd_9x19_P226_FMJ_Mag and JCA_15Rnd_9x19_P226_JHP_Mag initSpeed
        airFriction=-0.0016589; // B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_P226_JHP: JCA_B_9x19_Ball_P226_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.166}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127.0,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // at 21°C (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel - 378m/s (1240fps) 4.4" (112mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P226 initSpeed
        hit=8; // B_9x21_Ball 5, 574 Joules
        airFriction=-0.00193931; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_P226_SUB: JCA_B_9x19_Ball_P226_FMJ // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" 9mm 147gr Elite V-Crown JHP https://www.sigsauer.com/9mm-147gr-elite-v-crown-jhp-20ct.html
        ACE_bulletMass=9.525; // 147gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.193}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127.0,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={301,327,354}; // at 21°C (70°F: Temp vs MV chart zero), 300m/s (985fps) 4" barrel - 311m/s (1020fps) 4.4" (112mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_P226 initSpeed
        hit=7.2; // B_9x21_Ball 5, 461 Joules
        typicalSpeed=311; // JCA_15Rnd_9x19_P226_SUB_Mag initSpeed
        airFriction=-0.00114081; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
        visibleFire=1; // Subsonic, B_127x54_Ball, BulletBase 3
        audibleFire=5; // Subsonic, B_127x54_Ball, B_9x21_Ball 30
    };
    class JCA_B_9x19_Ball_P226_Tracer_Green: JCA_B_9x19_Ball_P226_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_P226_Tracer_Red: JCA_B_9x19_Ball_P226_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_P226_Tracer_Yellow: JCA_B_9x19_Ball_P226_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_P226_Tracer_IR: JCA_B_9x19_Ball_P226_FMJ
    {
        nvgOnly=1;
    };
    class JCA_B_9x19_Ball_MP5_FMJ: BulletBase // M17 Sig Sauer NATO 9x19mm +P 124gr FMJ https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.235}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127.0,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // at 21°C (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel - 428m/s (1404fps) 8.858" (225mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_MP5A5 initSpeed
        hit=5.4; // B_9x21_Ball 5, 736 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_9mm";
        cost=100;
        typicalSpeed=428; // JCA_30Rnd_9x19_MP5_FMJ_Mag and JCA_30Rnd_9x19_MP5_JHP_Mag initSpeed
        airFriction=-0.0015693; // ACE3 -0.00201185, B_9x21_Ball -0.0016, airFrictionAnalysis.txt in docs folder
        caliber=1.2;
        deflecting=25;
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        airLock=1;
        tracerScale=0.5;
        tracerStartTime=0.05;
        tracerEndTime=1;
        nvgOnly=0; // B_9x21_Ball 1
        audibleFire=30;
        aiAmmoUsageFlags=64;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
    };
    class JCA_B_9x19_Ball_MP5_JHP: JCA_B_9x19_Ball_MP5_FMJ // M17 Sig Sauer NATO 9x19mm +P 124gr V-Crown https://www.sigsauer.com/blog/sig-sauer-introduces-m17-9mm-p-ammunition
    {
        ACE_caliber=9.03; // 0.356" CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_bulletLength=14.859; // 0.585" https://www.sigsauer.com/9mm-p-124gr-elite-ball-m17-fmj-box-50.html
        ACE_bulletMass=8.035; // 124gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.204}; // recalculated ICAO G1 BC based on Sig Sauer 2024 datas https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=57
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_barrelLengths[]={101.6,127.0,228.6}; // default ACE3 4", 5", 9" barrel lengths
        ACE_muzzleVelocities[]={366,398,430}; // at 21°C (70°F: Temp vs MV chart zero), 365m/s (1198fps) 4" barrel - 428m/s (1404fps) 8.858" (225mm) barrel at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_MP5A5 initSpeed
        hit=9; // B_9x21_Ball 5, 736 Joules
        airFriction=-0.00180949; // airFrictionAnalysis.txt in docs folder
        caliber=0.72; // B_9x21_Ball 1.2
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Green: JCA_B_9x19_Ball_MP5_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Red: JCA_B_9x19_Ball_MP5_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Red";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_Yellow: JCA_B_9x19_Ball_MP5_FMJ
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_Yellow";
    };
    class JCA_B_9x19_Ball_MP5_Tracer_IR: JCA_B_9x19_Ball_MP5_FMJ
    {
        nvgOnly=1;
    };
    // JCA Bullets inherited from vanilla class B_556x45_Ball. To avoid all conflict with other mods, all JCA bullets with JCA as prefixe.
    // class B_556x45_Ball: BulletBase from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_556x45_Ball: BulletBase // M855, ACE3 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L117
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01; // ACE3
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.149}; // US Army's Ballistic Research Laboratory ASM BC 0.151 converted to ICAO 0.149012
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        // ACE_barrelLengths[]={210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6}; // default ACE3 barrel lengths https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900}; // default ACE3 MVs at 4m https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO
        // ACE_muzzleVelocities[]={715,784,832,873,890,912,926,904}; // MVs V0 Strelok Pro 15°C
        // ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508,609.6}; // 8", 10", 12", 14.5", 16", 18", 20", 24" barrels lengths
        ACE_muzzleVelocities[]={723,792,840,881,898,920,934}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 791m/s (10.3"), 873m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) 3D models' barrels lengths
        airLock=1;
        hit=8.3; // B_556x45_Ball 9, 1723 Joules
        indirectHit=0;
        indirectHitRange=0;
        cost=1;
        typicalSpeed=926; // B_556x45_Ball 920
        airFriction=-0.00133644; // ACE3 0.00130094, B_556x45_Ball 0.0012, airFrictionAnalysis.txt in docs folder
        waterFriction=-0.3;
        caliber=0.869565; // B_556x45_Ball
        model="\A3\Weapons_f\Data\bullettracer\tracer_white"; // B_762x51_Ball, B_556x45_Ball tracer_yellow
        tracerScale=1;
        tracerStartTime=0.17; // 140 m – ≥ 600 m typically 800 m, Strelok Pro MV 920m/s ICAO at 140m  ToF=0.17s, B_556x45_Ball 0.05, https://www.nammo.com/
        tracerEndTime=1.62; // 140 m – ≥ 600 m typically 800 m, Strelok Pro MV 920m/s ICAO at 800m  ToF=1.62s, B_556x45_Ball 1, https://www.nammo.com/
        nvgOnly=0; // B_556x45_Ball w/o nvgOnly
        audibleFire=35;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        aiAmmoUsageFlags=64;
        class CamShakeExplode
        {
            power=2.23607;
            duration=0.4;
            frequency=20;
            distance=6.7082;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_556x45_Ball_Tracer_Red: JCA_B_556x45_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_556x45_Ball_Tracer_Green: JCA_B_556x45_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_556x45_Ball_Tracer_Yellow: JCA_B_556x45_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_JCA_B_556x45_Ball_Tracer_IR: JCA_B_556x45_Ball // JCA_JCA to avoid all conflict with other mods and RPT Updating base class. JCA default config: JCA_B_556x45_Ball_Tracer_IR: B_556x45_Ball
    {
        tracerScale=0.5; // IR dim tracer, B_556x45_Ball 1
        tracerStartTime=0.01; // 13 m-600 m (typically visible to 950 m), Strelok Pro MV 930m/s ICAO at 13m  ToF=0.01s, B_556x45_Ball 0.05, https://www.nammo.com/
        tracerEndTime=2.12; // 13 m-600 m (typically visible to 950 m), Strelok Pro MV 930m/s ICAO at 950m  ToF=2.12s, B_556x45_Ball 1, https://www.nammo.com/
        nvgOnly=1;
    };
    class JCA_B_556x45_Ball_M855A1: JCA_B_556x45_Ball // M855A1 Lake City Army Ammunition Plant, 2022/23 article https://www.ar15.com/forums/AR-15/M855A1-Accuracy-and-Velocity-updated-/16-783286/
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=25.4; // 1"
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.149}; // average ICAO G7 BC 0.149 from "Ballistic Performance of Rifle Bullets" by Bryan Litz, (average ICAO G1 BC 0.291)
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        // 76°F (24°C rounded to 25°C for Ace3), 1019mB, 47%, barrel length 20": 3131fps (954m/s - 954m/s in-game) - barrel length 14.5": average 2951fps (899m/s - 900m/s in-game) from 2022/23 article values https://www.ar15.com/forums/AR-15/M855A1-Accuracy-and-Velocity-updated-/16-783286/
        ACE_muzzleVelocities[]={734,804,853,894,911,934,948}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 803m/s (10.3"), 886m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) 3D models' barrels lengths
        hit=8.4; // B_556x45_Ball 9, 1775 Joules
        typicalSpeed=940; // B_556x45_Ball 920
        airFriction=-0.00132981; // airFrictionAnalysis.txt in docs folder
        caliber=1; // B_556x45_Ball 0.869565
    };
    class JCA_B_556x45_Ball_M193: JCA_B_556x45_Ball // M193 RUAG Ammotec AG
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=17.78; // Strelok Pro
        ACE_bulletMass=3.6; // 55gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.280}; // M193 RUAG Ammotec AG
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={772,846,898,941,960,983,998}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 846m/s (10.3"), 933m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) 3D models' barrels lengths
        hit=8.4; // B_556x45_Ball 9, 1764 Joules
        typicalSpeed=990; // B_556x45_Ball 920
        airFriction=-0.00139457; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_Mk262: JCA_B_556x45_Ball // ACE_556x45_Ball_Mk262 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L141
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.99; // 77gr
        ACE_muzzleVelocityVariationSD=0.4;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.356}; // ASM BC 0.361 converted to ICAO 0.356247
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={655,717,761,798,813,833,846}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 716m/s (10.3"), 790m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508};
        hit=8.4; // B_556x45_Ball 9, 1752 Joules
        typicalSpeed=838; // B_556x45_Ball 920
        airFriction=-0.00114664; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_Mk318: JCA_B_556x45_Ball // ACE_556x45_Ball_Mk318 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L155
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.303}; // ASM BC 0.307 converted to ICAO 0.302958
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={742,812,862,904,921,944,958}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 812m/s (10.3"), 896m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508};
        hit=8.5; // B_556x45_Ball 9, 1813 Joules
        typicalSpeed=950; // B_556x45_Ball 920
        airFriction=-0.00130202; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_556x45_Ball_M995AP: JCA_B_556x45_Ball // M995 Armor Piercing https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/5-56mm-series/5-56-mm-x-45-armor-piercing-3/
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=24;
        ACE_bulletMass=3.4; // 52gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.260};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={803,880,933,979,998,1022,1038}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 880m/s (10.3"), 971m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) 3D models' barrel lengths
        hit=8.5; // B_556x45_Ball 9, 1804 Joules
        typicalSpeed=1030; // B_556x45_Ball 920
        airFriction=-0.00148799; // airFrictionAnalysis.txt in docs folder
        caliber=1.6; // ACE_556x45_Ball_M995_AP, B_556x45_Ball 0.869565
    };
    /*class B_556x45_dual: B_556x45_Ball // from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        cartridge="FxCartridge_65";
        audibleFire=20;
        dangerRadiusBulletClose=4;
        dangerRadiusHit=8;
        suppressionRadiusBulletClose=2;
        suppressionRadiusHit=4;
        typicalSpeed=270;
        airFriction=-0.02;
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };*/
    class JCA_B_556x45_Ball_Dual: JCA_B_556x45_Ball // 5.56mm underwater subsonic DSG Technology https://dsgtec.com/ https://www.thefirearmblog.com/blog/2017/04/20/dsg-technology-underwater-ammo/
    {
        ACE_caliber=5.70; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/223-rem-170406-en.pdf
        ACE_bulletLength=23.01;
        ACE_bulletMass=4.018; // 62gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.149}; // ASM BC 0.151 converted to ICAO 0.149012
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=7;
        ACE_muzzleVelocities[]={220,241,255,268,273,280,284}; // Muzzle Velocities shift +8m/s at 70°F (21°C), 242m/s (10.3"), 267m/s (14.5") at 15°C
        ACE_barrelLengths[]={203.2,254,304.8,368.3,406.4,457.2,508}; // M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) 3D models' barrels lengths
        // cartridge="FxCartridge_65";
        visibleFire=1; // B_127x54_Ball, BulletBase 3
        audibleFire=5; // B_127x54_Ball, B_556x45_Ball 35, B_556x45_dual 20
        dangerRadiusBulletClose=4; // B_556x45_Ball 8
        dangerRadiusHit=8; // B_556x45_Ball 12
        suppressionRadiusBulletClose=2; // B_556x45_Ball 6
        suppressionRadiusHit=4; // B_556x45_Ball 8
        typicalSpeed=270;
        airFriction=-0.0005713; // airFrictionAnalysis.txt in docs folder, https://github.com/acemod/ACE3/pull/7982
        waterFriction=-0.01;
        effectFly="AmmoUnderwater";
        nvgOnly=1;
        aiAmmoUsageFlags="64 + 32";
    };
    // JCA Bullets inherited from vanilla class B_762x51_Ball. To avoid all conflict with other mods, all JCA bullets with JCA as prefixe
    // class B_762x51_Ball: BulletBase from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    class JCA_B_762x51_Ball: BulletBase // ACE_762x51_Ball_Mk316_Mod_0 https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L317
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=31.5; // Strelok Pro, Applied Ballistics
        ACE_bulletMass=11.34; // 175gr
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        // ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; default ACE3
        // ACE_ammoTempMuzzleVelocityShifts[]={-5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2}; default ACE_762x51_Ball_Mk316_Mod_0
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        // ACE_ballisticCoefficients[]={0.243}; // Bryan Litz Applied Ballistics ICAO G7 BC based on Sierra ASM G1 BC 0.505, 2800 fps (853m/s) and above
        ACE_ballisticCoefficients[]={0.489}; // ICAO G1 BC 0.48947 converted from Sierra bullet 7.62mm 175 Gr. HPBT MatchKing ASM G1 BC 0.496 between 2800 fps (853m/s) and 1800 fps (549m/s) https://www.sierrabullets.com/product/30-cal-7-62mm-175-gr-hpbt-matchking/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={757,767,777,792,807,812}; // muzzle velocities 772 / 792 m/s at 21°C (70°F: Temp vs MV chart zero), 770 / 790 m/s at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_arifle_SR10 / SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm) / SR25 20" (508mm) 3D models' barrels lengths
        hit=16; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 11.6, 3539 Joules
        indirectHit=0;
        indirectHitRange=0;
        cartridge="FxCartridge_762";
        visibleFire=3;
        audibleFire=45;
        dangerRadiusBulletClose=8;
        dangerRadiusHit=12;
        suppressionRadiusBulletClose=6;
        suppressionRadiusHit=8;
        cost=1.2;
        airLock=1;
        typicalSpeed=790; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 800
        caliber=1.8; // ACE_762x51_Ball_Mk316_Mod_0, B_762x51_Ball 1.6
        model="\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerScale=1.2; // ACE3, B_762x51_Ball 0.6
        tracerStartTime=0.19; // 140 m – ≥ 775 m typically 900 m, Strelok Pro ToF ICAO at 140m 0.19s, B_762x51_Ball 0.0075, https://www.nammo.com/
        tracerEndTime=1.72; // 140 m – ≥ 775 m typically 900 m, Strelok Pro ToF ICAO at 900m 1.72s, B_762x51_Ball 5, https://www.nammo.com/
        nvgOnly=0; // B_762x51_Ball w/o nvgOnly
        airFriction=-0.00084907; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.8284299;
            duration=0.60000002;
            frequency=20;
            distance=8.48528;
        };
        class CamShakeHit
        {
            power=5;
            duration=0.2;
            frequency=20;
            distance=1;
        };
    };
    class JCA_B_762x51_Tracer_Red: JCA_B_762x51_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_red";
    };
    class JCA_B_762x51_Tracer_Green: JCA_B_762x51_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_green";
    };
    class JCA_B_762x51_Tracer_Yellow: JCA_B_762x51_Ball
    {
        model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
    };
    class JCA_JCA_B_762x51_Tracer_IR: JCA_B_762x51_Ball // JCA_JCA to avoid all conflict with other mods and RPT Updating base class. JCA default config: JCA_B_762x51_Tracer_IR: B_762x51_Ball
    {
        tracerScale=0.6; // IR dim tracer, B_762x51_Ball
        tracerStartTime=0.02; // 13–775 m (typically visible to 1250 m), Strelok Pro ToF ICAO at 13m 0.02s, B_762x51_Ball 0.0075, https://www.nammo.com/
        tracerEndTime=2.8; // 13–775 m (typically visible to 1250 m), Strelok Pro ToF ICAO at 1250m 2.80s, B_762x51_Ball 5, https://www.nammo.com/
        nvgOnly=1;
    };
    class JCA_B_762x51_M993AP: JCA_B_762x51_Ball // ACE_762x51_Ball_M993_AP https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/7-62mm-series/7-62-mm-x-51-armor-piercing-8-m993/
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=31.5;
        ACE_bulletMass=8.23; // 127gr
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55,-25.47,-22.85,-20.12,-16.98,-12.80,-7.64,-1.53,5.96,15.17,26.19}; // default ACE_ammoTempMuzzleVelocityShifts values. Muzzle velocity shift 0 at 70°F (21°C), -8m/s at 15°C
        ACE_ballisticCoefficients[]={0.359}; // https://github.com/acemod/ACE3/blob/master/addons/ballistics/CfgAmmo.hpp#L351
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={897,909,920,938,958,962}; // muzzle velocities 915 / 938 m/s at 21°C (70°F: Temp vs MV chart zero), 906 / 930 m/s at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_arifle_SR10 / SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm) / SR25 20" (508mm) 3D models' barrels lengths
        hit=12; // ACE_762x51_Ball_M993_AP 11, B_762x51_Ball 11.6, 3560 Joules
        typicalSpeed=930; // ACE_762x51_Ball_M993_AP 910
        caliber=2.2; // ACE_762x51_Ball_M993_AP, B_762x51_Ball 1.6
        airFriction=-0.00110502; // airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_762x51_Subsonic: JCA_B_762x51_Ball // Lapua subsonic B416, 325m/s 16" (406.4mm) barrel (Trajectory charts) https://www.lapua.com/product/308-win-subsonic-fmjbt-tactical-cartridge-13g-200gr-4317340/
    {
        ACE_caliber=7.85; // https://bobp.cip-bobp.org/uploads/tdcc/tab-i/tabical-en-page125.pdf
        ACE_bulletLength=34.11; // Strelok Pro
        ACE_bulletMass=12.96; // 200 gr
        ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.547,-2.285,-2.012,-1.698,-1.280,-0.764,-0.153,0.596,1.517,2.619}; // default ACE_ammoTempMuzzleVelocityShifts values /10. Muzzle velocity shift 0 at 70°F (21°C), -1m/s at 15°C
        ACE_ballisticCoefficients[]={0.518}; // https://www.lapua.com/product/30-cal-fmjbt-subsonic-bullet-b416-130-g-200-gr/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
        ACE_dragModel=1;
        ACE_muzzleVelocities[]={318,322,326,332,339,341}; // muzzle velocities 324 / 332 m/s at 21°C (70°F: Temp vs MV chart zero), 323 / 331 m/s at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_arifle_SR10 / SR25 initSpeed
        ACE_barrelLengths[]={254,330.2,406.4,508,609.6,660.4}; // SR10 14.5" (368.3mm) / SR25 20" (508mm) 3D models' barrels lengths
        hit=6; // ACE_762x51_Ball_Subsonic, B_762x51_Ball 11.6
        visibleFire=1; // B_127x54_Ball, B_762x51_Ball 3
        audibleFire=5; // B_127x54_Ball, B_762x51_Ball 45
        dangerRadiusBulletClose=4; // B_127x54_Ball, B_762x51_Ball 8
        suppressionRadiusBulletClose=2; // B_127x54_Ball, B_762x51_Ball 6
        typicalSpeed=320; // ACE_762x51_Ball_Subsonic
        caliber=1; // ACE_762x51_Ball_Subsonic, B_762x51_Ball 1.6
        airFriction=-0.00049496; // airFrictionAnalysis.txt in docs folder
        class CamShakeExplode
        {
            power=2.23607; // B_127x54_Ball, B_762x51_Ball 2.8284299
            duration=0.4; // B_127x54_Ball, B_762x51_Ball 0.6
            frequency=20; // B_127x54_Ball ,B_762x51_Ball 20
            distance=6.7082; // B_127x54_Ball, B_762x51_Ball 8.48528
        };
    };
    class JCA_B_338LM_Ball: B_338_Ball // B_338_Ball, Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=39.4; // Strelok Pro .338 LM Lapua Scenar 250gr GB488, 1.551" https://jbmballistics.com
        ACE_bulletMass=16.2; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        ACE_ballisticCoefficients[]={0.648}; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM Scenar 250gr GB488 https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
        ACE_muzzleVelocities[]={908}; // muzzle velocity 908 m/s at 21°C (70°F: Temp vs MV chart zero), 906 m/s with barrel length 27" at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        hit=20; // hit value according to Arma3 "Armor Level IV" value, B_338_Ball 16, JCA 18. 16.2g 906 m/s = 6650 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s): 4163 Joules
        caliber=0.443; // Perforation 5mm RHA "armour_plate_5mm.bisurf" at 300m (5mm 752m/s default ballistic - 761m/s ICAO advanced ballistics), B_338_Ball 2, JCA 1.8, should be Lapua Scenar penetration 3mm RHA at 300m
        typicalSpeed=906; // according to JCA_5Rnd_338LM_Mag initSpeed, B_338_Ball 890
        tracerScale=1.2; // No .338 LM tracer irl, B_338_Ball, JCA 1.3
        tracerStartTime=0.23; // No .338 LM tracer irl, based on 12.7x99 Tracer visible < 200 m to ≥ 1 500 m https://www.nammo.com/ ToF ICAO at 200m 0.23s (Strelok Pro), B_338_Ball 0.075
        tracerEndTime=2.75; // No .338 LM tracer irl, based on 12.7x99 Tracer visible < 200 m to ≥ 1 500 m https://www.nammo.com/ ToF ICAO at 1500m 2.75s (Strelok Pro), B_338_Ball 1, JCA 3
        airFriction=-0.00061662; // elevation gap 0.1, 0.2mRad until 1700m, airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_338LM_Ball_Tracer_IR: JCA_B_338LM_Ball
    {
        tracerScale=0.6; // IR dim tracer
        tracerStartTime=0.01; // No .338 LM tracer irl, based on 7.62 mm x 51 DIM TRACER (IR), 13–775 m (typically visible to 1250 m) https://www.nammo.com/ ToF ICAO at 13m 0.01s (Strelok Pro), B_338_Ball 0.075
        tracerEndTime=2.08; // No .338 LM tracer irl, based on 7.62 mm x 51 DIM TRACER (IR), 13–775 m (typically visible to 1250 m) https://www.nammo.com/ ToF ICAO at 1250m 2.08s (Strelok Pro), B_338_Ball 1, JCA 3
    };
    class JCA_B_338LM_AP_Ball: JCA_B_338LM_Ball // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=35.5; // 1.398" 35.51mm https://jbmballistics.com
        ACE_bulletMass=16.1; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        ACE_ballisticCoefficients[]={0.564}; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM 248gr AP485 Armor Piercing https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
        ACE_muzzleVelocities[]={908}; // muzzle velocity 908 m/s at 21°C (70°F: Temp vs MV chart zero), 906 m/s with barrel length 27" at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_AP_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        caliber=1.307; // Perforation 12mm RHA "armour_plate_12mm.bisurf" at 550m (12mm 612m/s default ballistic - 619m/s ICAO advanced ballistics), B_338_Ball 2, should be 12 mm at 550 m Steel plate 400 HB https://www.nammo.com/
        hit=20; // hit value according to Arma3 "Armor Level IV" value. 16.1g 906 m/s = 6609 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s): 4163 Joules
        typicalSpeed=906; // according to JCA_5Rnd_338LM_AP_Mag initSpeed, B_338_Ball 890
        airFriction=-0.00070864; // elevation gap 0.1, 0.2mRad until 1500m, airFrictionAnalysis.txt in docs folder
    };
    class JCA_B_338LM_API_Ball: JCA_B_338LM_Ball // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
    {
        ACE_caliber=8.61; // .338 LM CIP diameter https://bobp.cip-bobp.org/uploads/tdcc/tab-i/338-lapua-mag-en.pdf
        ACE_bulletLength=39; // 1.535" 38.99mm https://jbmballistics.com
        ACE_bulletMass=16.4; // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_muzzleVelocityVariationSD=0.3; // ACE3 default value https://github.com/acemod/ACE3/blob/master/addons/advanced_ballistics/script_component.hpp#L32
        ACE_ammoTempMuzzleVelocityShifts[]={-5.31,-5.094,-4.57,-4.024,-3.396,-2.56,-1.528,-0.306,1.192,3.034,5.238}; // default ACE_ammoTempMuzzleVelocityShifts values /5. Muzzle velocity shift 0 at 70°F (21°C), -2m/s at 15°C
        ACE_ballisticCoefficients[]={0.554}; // Lapua .338 LM 253gr API526 https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO"; // ICAO: 15°C, 1013.25 hPa, 0%
        ACE_dragModel=1; // Lapua .338 LM 253gr API526 Armor Piercing Incendiary https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
        ACE_muzzleVelocities[]={898}; // muzzle velocity 898 m/s at 21°C (70°F: Temp vs MV chart zero), 896 m/s with barrel length 27" at 15°C (ICAO: 15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_API_Mag initSpeed
        ACE_barrelLengths[]={685.8}; // 27"
        ace_vehicle_damage_incendiary=1; // observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/8-6mm-series-338/8-6-mm-x-70-338-lapua-armor-piercing-incendiary/
        caliber=1.07; // Perforation 10mm RHA (no vanilla "armour_plate_10mm.bisurf", custom model) at 500m (10mm 623m/s default ballistic - 630m/s ICAO advanced ballistics), B_338_Ball 2, should be 10 mm at 500 m Steel plate 400 HB https://www.nammo.com/
        hit=24; // hit value according to Arma3 "Armor Level V" value. 16.4g 896 m/s = 6584 Joules. NIJ Type IV (Armor Piercing Rifle) and NIJ RF3: 30.06 M2 AP bullet 10.8g 878m/s (165.7gr 2880ft/s): 4163 Joules
        indirectHit=4; // B_20mm_AP 8
        indirectHitRange=0.1; // B_20mm_AP 0.2
        typicalSpeed=896; // according to JCA_5Rnd_338LM_API_Mag initSpeed, B_338_Ball 890
        airFriction=-0.0007233; // elevation gap 0.1, 0.2mRad until 1500m, airFrictionAnalysis.txt in docs folder
        CraterEffects="ExploAmmoCrater"; // ammo_Penetrator_Base
        class HitEffects // B_30mm_APFSDS. Observable flash at hard targets. Ignition of vaporized fuel https://www.nammo.com/product/our-products/ammunition/small-caliber-ammunition/8-6mm-series-338/8-6-mm-x-70-338-lapua-armor-piercing-incendiary/
        {
            hitMetal="ImpactMetalSabotSmall";
            hitMetalPlate="ImpactMetalSabotSmall";
            hitBuilding="ImpactConcreteSabotSmall";
            hitConcrete="ImpactConcreteSabotSmall";
            hitGroundSoft="ImpactEffectsGroundSabot";
            hitGroundRed="ImpactEffectsGroundSabot"; // BulletBase ImpactEffectsRed
            hitGroundHard="ImpactEffectsGroundSabot";
            Hit_Foliage_green="ImpactLeavesGreen";
            Hit_Foliage_Dead="ImpactLeavesDead";
            Hit_Foliage_Green_big="ImpactLeavesGreenBig";
            Hit_Foliage_Palm="ImpactLeavesPalm";
            Hit_Foliage_Pine="ImpactLeavesPine";
            hitFoliage="ImpactLeaves";
            hitGlass="ImpactGlass";
            hitGlassArmored="ImpactGlassThin";
            hitWood="ImpactWood";
            hitHay="ImpactHay";
            hitPlastic="ImpactPlastic";
            hitRubber="ImpactRubber";
            hitTyre="ImpactTyre";
            hitMan="ImpactEffectsBlood";
            hitWater="ImpactEffectsWater";
            hitVirtual="ImpactMetal"; // BulletBase
            default_mat="ImpactEffectsGroundSabot";
        };
    };
};
class CfgMagazines
{
    class CA_Magazine;
    class JCA_15Rnd_9x19_P320C_FMJ_Mag: CA_Magazine // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 15rnd P320 FMJ Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_17Rnd_9x21_P320_Mag_CA.paa";
        ammo="JCA_B_9x19_Ball_P320C_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=5.6; // magazine 15 rounds empty 76g + 15x 11.9g, JCA 6
        initSpeed=361; // according to ACE_muzzleVelocities 3.9" barrel (99mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 410
        tracersEvery=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P320 Compact";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_P320C_JHP_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd P320 JHP Mag";
        ammo="JCA_B_9x19_Ball_P320C_JHP";
        mass=6.3; // magazine 15 rounds empty 76g + 15x 13.9g, JCA 6
        initSpeed=300; // according to ACE_muzzleVelocities 3.9" barrel (99mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_P320C_Red_Mag: JCA_15Rnd_9x19_P320C_FMJ_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_15Rnd_9x19_P320C_Green_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P320C_Yellow_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P320C_IR_Mag: JCA_15Rnd_9x19_P320C_Red_Mag // M1152 Sig Sauer 9x19mm 115gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P320 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_P320C_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_15Rnd_9x19_P226_FMJ_Mag: CA_Magazine // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 15rnd P226 FMJ Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_15Rnd_9x21_P226_Mag_CA.paa";
        ammo="JCA_B_9x19_Ball_P226_FMJ";
        type=16; // 16Rnd_9x21_Mag
        count=15;
        mass=5.7; // magazine 15 rounds empty 76g + 15x 12.3g, JCA 6
        initSpeed=378; // according to ACE_muzzleVelocities 4.4" barrel (112mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 410
        tracersEvery=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P226";
        displaynameshort="FMJ";
    };
    class JCA_15Rnd_9x19_P226_JHP_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd P226 JHP Mag";
        ammo="JCA_B_9x19_Ball_P226_JHP";
        displaynameshort="JHP";
    };
    class JCA_15Rnd_9x19_P226_SUB_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M1153 Sig Sauer 9x19mm 147gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Subsonic Mag";
        ammo="JCA_B_9x19_Ball_P226_SUB";
        mass=6.3; // magazine 15 rounds empty 76g + 15x 13.9g, JCA 6
        initSpeed=311; // according to ACE_muzzleVelocities 4.4" barrel (112mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_15Rnd_9x19_P226_Red_Mag: JCA_15Rnd_9x19_P226_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (Red) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Red";
        displaynameshort="Tracer";
        tracersEvery=1;
    };
    class JCA_15Rnd_9x19_P226_Green_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (Green) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Green";
    };
    class JCA_15Rnd_9x19_P226_Yellow_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (Yellow) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_Yellow";
    };
    class JCA_15Rnd_9x19_P226_IR_Mag: JCA_15Rnd_9x19_P226_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 15rnd P226 Tracer (IR) Mag";
        ammo="JCA_B_9x19_Ball_P226_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_FMJ_Mag: CA_Magazine // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        scope=2;
        displayName="9 mm 30Rnd MP5 FMJ Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_MP5_MAG_CA.paa";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_MP5_MAG.p3d";
        modelSpecialIsProxy=1;
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\SMGs\MP5\Data\smg_MP5_02_black_CO.paa"
        };
        ammo="JCA_B_9x19_Ball_MP5_FMJ";
        count=30;
        mass=11.9; // magazine 30 rounds empty 170g + 30x 12.3g, JCA 10
        initSpeed=428; // according to ACE_muzzleVelocities 8.858" barrel (225mm) ICAO conditions (15°C, 1013.25hPa, 0%), JCA 370
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: 9x19 mm<br />Rounds: 30<br />Used in: MP5A5";
        displaynameshort="FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 30Rnd MP5 JHP Mag";
        ammo="JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort="JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Red) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_9x19_MP5_Green_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Green) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Yellow) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (IR) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Mag: JCA_30Rnd_9x19_MP5_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Red) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Green) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Yellow) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (IR) MP5 Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd MP5 FMJ Sand Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_MP5_MAG_sand_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\SMGs\MP5\Data\smg_MP5_02_sand_CO.paa"
        };
        displaynameshort="FMJ";
    };
    class JCA_30Rnd_9x19_MP5_JHP_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Jacketed Hollow Point JHP
    {
        author="Grave";
        displayName="9 mm 30Rnd MP5 JHP Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_JHP";
        displaynameshort="JHP";
    };
    class JCA_30Rnd_9x19_MP5_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Red) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_9x19_MP5_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Green) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (Yellow) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Reload Tracer (IR) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag: JCA_30Rnd_9x19_MP5_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Red) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Green) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Green";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (Yellow) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_Yellow";
    };
    class JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag: JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag // M17 Sig Sauer NATO 9x19mm +P 124gr Full Metal Jacket FMJ
    {
        author="Grave";
        displayName="9 mm 30Rnd Tracer (IR) MP5 Sand Mag";
        ammo="JCA_B_9x19_Ball_MP5_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_PMAG: CA_Magazine // JCA default config
    {
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_PMAG_CA.paa";
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd PMAG";
        ammo="JCA_B_556x45_Ball";
        count=30;
        mass=11.2; // Polymer magazine 30 rounds (empty) 140g + 30x 12.3g (M855 cartridge weight)
        initSpeed=926; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: 5.56 STANAG Rifles";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_PMAG.p3d";
        modelSpecialIsProxy=1;
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_PMAG_black_CO.paa"
        };
    };
    class JCA_30Rnd_556x45_M855A1_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 PMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 PMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=10.8; // Polymer magazine 30 rounds (empty) 140g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 PMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=11.9; // Polymer magazine 30 rounds (empty) 140g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 PMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_PMAG: JCA_30Rnd_556x45_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP PMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=10.8; // Polymer magazine 30 rounds (empty) 140g + 30x 11.7g (M995 cartridge weight)
        initSpeed=1030; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_PMAG: JCA_30Rnd_556x45_PMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose PMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_PMAG: JCA_30Rnd_556x45_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Tracer_Red_PMAG: JCA_30Rnd_556x45_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_PMAG: JCA_30Rnd_556x45_Tracer_Red_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_sand_PMAG: JCA_30Rnd_556x45_PMAG
    {
    };
    class JCA_30Rnd_556x45_M855A1_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 Sand PMAG";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_M193_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 Sand PMAG";
        ammo="JCA_B_556x45_Ball_M193";
        mass=10.8; // Polymer magazine 30 rounds (empty) 140g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Mk262_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 Sand PMAG";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=11.9; // Polymer magazine 30 rounds (empty) 140g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Mk318_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 Sand PMAG";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_M995AP_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP Sand PMAG";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=10.8; // Polymer magazine 30 rounds (empty) 140g + 30x 11.7g (M995 cartridge weight)
        initSpeed=1030; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_UW_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose Sand PMAG";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Red_sand_PMAG: JCA_30Rnd_556x45_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
    };
    class JCA_30Rnd_556x45_Green_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Yellow_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_IR_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Tracer_Red_sand_PMAG: JCA_30Rnd_556x45_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Tracer_Green_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Tracer_IR_sand_PMAG: JCA_30Rnd_556x45_Tracer_Red_sand_PMAG
    {
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    // JCA 5.56x45 Stanag Magazines use vanilla class 30Rnd_556x45_Stanag. To avoid all conflict with other mods and RPT Updating base class, all JCA 5.56x45 Stanag Magazines with JCA as prefixe
    /*class 30Rnd_556x45_Stanag: CA_Magazine from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
    {
        picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
        author="$STR_A3_Bohemia_Interactive";
        scope=2;
        displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag0";
        ammo="B_556x45_Ball";
        count=30;
        initSpeed=920;
        tracersEvery=0;
        lastRoundsTracer=4;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
        modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
        modelSpecialIsProxy=1;
    };
    class 30Rnd_556x45_Stanag: CA_Magazine // JCA default config
    {
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
        ammo="B_556x45_Ball";
        count=30;
        mass=8;
        initSpeed=920;
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
    };*/
    class JCA_30Rnd_556x45_Stanag: CA_Magazine // JCA default config with JCA as prefixe
    {
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_CA.paa";
        author="Grave";
        scope=2;
        displayName="5.56 mm 30Rnd Mag";
        ammo="JCA_B_556x45_Ball";
        count=30;
        mass=13.6; // Steel magazine 30 rounds (empty) 250g + 30x 12.3g (M855 cartridge weight)
        initSpeed=926; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        tracersEvery=0;
        lastRoundsTracer=0;
        descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
        modelSpecial="weapons_f_JCA_IA\MagazineProxies\30Rnd_556_SMAG.p3d";
        modelSpecialIsProxy=1;
    };
    class JCA_30Rnd_556x45_Stanag_M855A1: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 Mag";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_M193: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 Mag";
        ammo="JCA_B_556x45_Ball_M193";
        mass=13.2; // Steel magazine 30 rounds (empty) 250g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Stanag_Mk262: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 Mag";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=14.3; // Steel magazine 30 rounds (empty) 250g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Mk318: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 Mag";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_M995AP: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP Mag";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=13.2; // Steel magazine 30 rounds (empty) 250g + 30x 11.7g (M995 cartridge weight)
        initSpeed=1030; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_UW: JCA_30Rnd_556x45_Stanag // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose Mag";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Stanag_Red: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Red) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_556x45_Stanag_Green: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Green) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Yellow: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Yellow) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_IR: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (IR) Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Red: JCA_30Rnd_556x45_Stanag_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Red) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Green: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Green) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Yellow) Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Tracer_IR: JCA_30Rnd_556x45_Stanag_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (IR) Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_30Rnd_556x45_Stanag_Sand: JCA_30Rnd_556x45_Stanag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Sand Mag";
        picture="\weapons_f_JCA_IA\MagazineProxies\data\UI\Icon_30Rnd_556x45_SMAG_sand_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "weapons_f_JCA_IA\MagazineProxies\data\mag_30Rnd_556_SMAG_sand_CO.paa"
        };
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M855A1: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M855A1 Sand Mag";
        ammo="JCA_B_556x45_Ball_M855A1";
        initSpeed=940; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M855A1";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M193: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M193 Sand Mag";
        ammo="JCA_B_556x45_Ball_M193";
        mass=13.2; // Steel magazine 30 rounds (empty) 250g + 30x 11.6g (M193 cartridge weight)
        initSpeed=990; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M193";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk262: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk262 Sand Mag";
        ammo="JCA_B_556x45_Ball_Mk262";
        mass=14.3; // Steel magazine 30 rounds (empty) 250g + 30x 13.3g (Mk262 cartridge weight)
        initSpeed=838; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk262";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Mk318: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Mk318 Sand Mag";
        ammo="JCA_B_556x45_Ball_Mk318";
        initSpeed=950; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Mk318";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_M995AP: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd M995 AP Sand Mag";
        ammo="JCA_B_556x45_Ball_M995AP";
        mass=13.2; // Steel magazine 30 rounds (empty) 250g + 30x 11.7g (M995 cartridge weight)
        initSpeed=1030; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="M995 AP";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_UW: JCA_30Rnd_556x45_Stanag_Sand // default Arma3 20Rnd_556x45_UW_mag
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Dual Purpose Sand Mag";
        ammo="JCA_B_556x45_Ball_Dual";
        initSpeed=283; // according to ACE_muzzleVelocities M4A1 CQB, M4A4, M4A4 EGLM 10.3" (261.62mm) / M4A1, M4A1 EGLM 14.5" (368.3mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="UW";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Red: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Red) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        lastRoundsTracer=4;
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Green: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Green) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (Yellow) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_IR: JCA_30Rnd_556x45_Stanag_Sand_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Reload Tracer (IR) Sand Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red: JCA_30Rnd_556x45_Stanag_Sand
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Red) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Red";
        tracersEvery=1;
        displaynameshort="Tracer";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Green) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Green";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (Yellow) Sand Mag";
        ammo="JCA_B_556x45_Ball_Tracer_Yellow";
    };
    class JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR: JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red
    {
        author="Grave";
        displayName="5.56 mm 30Rnd Tracer (IR) Sand Mag";
        ammo="JCA_JCA_B_556x45_Ball_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_PMAG: CA_Magazine
    {
        ammo="JCA_B_762x51_Ball";
        mass=14.7; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 25.3g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=790; // 7.62x51 Mk316 Mod0, according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%), 20Rnd_762x51_Mag 850
    };
    class JCA_20Rnd_762x51_Red_PMAG: JCA_20Rnd_762x51_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_PMAG: JCA_20Rnd_762x51_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_PMAG: JCA_20Rnd_762x51_Tracer_Red_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_PMAG: JCA_20Rnd_762x51_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP PMAG";
        ammo="JCA_B_762x51_M993AP";
        mass=13.9; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 23.5g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=930; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_PMAG: JCA_20Rnd_762x51_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic PMAG";
        ammo="JCA_B_762x51_Subsonic";
        mass=16; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 28.2g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=331; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Sand_PMAG: JCA_20Rnd_762x51_PMAG
    {
    };
    class JCA_20Rnd_762x51_Red_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG: JCA_20Rnd_762x51_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_PMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_PMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP Sand PMAG";
        ammo="JCA_B_762x51_M993AP";
        mass=13.9; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 23.5g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=930; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_PMAG: JCA_20Rnd_762x51_Sand_PMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic Sand PMAG";
        ammo="JCA_B_762x51_Subsonic";
        mass=16; //  PMAGs SR25 20 rnds 5.7oz (162g) + 20x 28.2g, JCA 9 https://magpul.com/pmag20lr-srgenm3-7-62x51.html?mp_global_color=118
        initSpeed=331; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_SMAG: CA_Magazine
    {
        ammo="JCA_B_762x51_Ball";
        mass=15.7; //  SMAGs SR25 20 rnds 206g + 20x 25.3g, JCA 9
        initSpeed=790; // 7.62x51 Mk316 Mod0, according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%), 20Rnd_762x51_Mag 850
    };
    class JCA_20Rnd_762x51_Red_SMAG: JCA_20Rnd_762x51_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_SMAG: JCA_20Rnd_762x51_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_SMAG: JCA_20Rnd_762x51_Tracer_Red_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_SMAG: JCA_20Rnd_762x51_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP Mag";
        ammo="JCA_B_762x51_M993AP";
        mass=14.9; //  SMAGs SR25 20 rnds 206g + 20x 23.5g, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_SMAG: JCA_20Rnd_762x51_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic Mag";
        ammo="JCA_B_762x51_Subsonic";
        mass=17; //  SMAGs SR25 20 rnds 206g + 20x 28.2g, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_20Rnd_762x51_Sand_SMAG: JCA_20Rnd_762x51_SMAG
    {
    };
    class JCA_20Rnd_762x51_Red_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
    };
    class JCA_20Rnd_762x51_Green_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_IR_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
    };
    class JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG: JCA_20Rnd_762x51_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Red";
        displaynameshort="Tracer";
    };
    class JCA_20Rnd_762x51_Tracer_Green_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Green";
    };
    class JCA_20Rnd_762x51_Tracer_Yellow_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_B_762x51_Tracer_Yellow";
    };
    class JCA_20Rnd_762x51_Tracer_IR_Sand_SMAG: JCA_20Rnd_762x51_Tracer_Red_Sand_SMAG
    {
        ammo="JCA_JCA_B_762x51_Tracer_IR";
        displaynameshort="Tracer IR";
    };
    class JCA_20Rnd_762x51_M993AP_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd M993 AP Sand Mag";
        ammo="JCA_B_762x51_M993AP";
        mass=14.9; //  SMAGs SR25 20 rnds 206g + 20x 23.5g, JCA 9
        initSpeed=930; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="AP";
    };
    class JCA_20Rnd_762x51_Subsonic_Sand_SMAG: JCA_20Rnd_762x51_Sand_SMAG
    {
        author="Grave";
        displayName="7.62 mm 20Rnd Subsonic Sand Mag";
        ammo="JCA_B_762x51_Subsonic";
        mass=17; //  SMAGs SR25 20 rnds 206g + 20x 28.2g, JCA 9
        initSpeed=331; // according to ACE_muzzleVelocities 20" barrel (508mm) ICAO conditions (15°C, 1013.25hPa, 0%)
        displaynameshort="Subsonic";
    };
    class JCA_5Rnd_338LM_AWM_Mag: CA_Magazine
    {
        mass=9.7; // magazine 219g + 5x 44.5g, JCA 8
        initSpeed=906; // Lapua .338 LM Scenar 250gr GB488: 905m/s with barrel length 680mm, 906m/s barrel length 27" (685.8mm) according to ACE_ammoTempMuzzleVelocityShifts https://www.lapua.com/product/338-lapua-mag-tactical-target-cartridge-scenar-162g-250gr-4318017/
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Red_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Green_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer";
    };
    class JCA_5Rnd_338LM_AWM_Tracer_IR_Mag: JCA_5Rnd_338LM_AWM_Tracer_Red_Mag
    {
        displaynameshort="Tracer IR";
    };
    class JCA_5Rnd_338LM_AWM_AP_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        author="Grave";
        displayName=".338 LM 5Rnd AP Mag";
        displaynameshort="AP";
        ammo="JCA_B_338LM_AP_Ball";
        // mass=9.7; // magazine 219g + 5x 44.3g
        // initSpeed=906; // Lapua .338 LM 250gr AP485: 905m/s with barrel length 680mm, 906m/s barrel length 27" (685.8mm) according to ACE_ammoTempMuzzleVelocityShifts https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-armor-piercing-161g-248gr-4318035/
    };
    class JCA_5Rnd_338LM_AWM_API_Mag: JCA_5Rnd_338LM_AWM_Mag
    {
        author="Grave";
        displayName=".338 LM 5Rnd API Mag";
        displaynameshort="API";
        ammo="JCA_B_338LM_API_Ball";
        // mass=9.7; // magazine 219g + 5x 44.4g
        initSpeed=896; // Lapua .338 LM 253gr API526: 895m/s with barrel length 680mm, 896m/s barrel length 27" (685.8mm) according to ACE_ammoTempMuzzleVelocityShifts https://www.lapua.com/product/338-lapua-mag-tactical-cartridge-api526-164g-253gr-4318048/
    };
};
class CfgMagazineWells
{
    class JCA_P320_Compact_9x19 // Weapon initSpeed -1 with ACE_barrelLength 99mm (3.9"), 361, 300m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_P320C_FMJ_Mag and JCA_15Rnd_9x19_P320C_JHP_Mag initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_P320C_FMJ_Mag",
            "JCA_15Rnd_9x19_P320C_JHP_Mag",
            "JCA_15Rnd_9x19_P320C_Red_Mag",
            "JCA_15Rnd_9x19_P320C_Green_Mag",
            "JCA_15Rnd_9x19_P320C_Yellow_Mag",
            "JCA_15Rnd_9x19_P320C_IR_Mag"
        };
    };
    class JCA_P226_9x19 // Weapon initSpeed -1 with ACE_barrelLength 112mm (4.4"), 378, 311m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_15Rnd_9x19_P226_FMJ_Mag, JCA_15Rnd_9x19_P226_JHP_Mag and JCA_15Rnd_9x19_P226_SUB_Mag initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_15Rnd_9x19_P226_FMJ_Mag",
            "JCA_15Rnd_9x19_P226_JHP_Mag",
            "JCA_15Rnd_9x19_P226_SUB_Mag",
            "JCA_15Rnd_9x19_P226_Red_Mag",
            "JCA_15Rnd_9x19_P226_Green_Mag",
            "JCA_15Rnd_9x19_P226_Yellow_Mag",
            "JCA_15Rnd_9x19_P226_IR_Mag"
        };
    };
    class JCA_MP5_9x19 // Weapon initSpeed -1 with ACE_barrelLength 225mm, 428m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_9x19_MP5_FMJ_Mag and JCA_30Rnd_9x19_MP5_JHP_Mag initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"
        };
    };
    class STANAG_556x45
    {
        BI_Magazines[]= // JCA default config with 5.56x45mm JCA Mags
        /*{
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Red",
            "30Rnd_556x45_Stanag_Green",
            "30Rnd_556x45_Stanag_Yellow",
            "30Rnd_556x45_Stanag_IR",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Tracer_IR",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_Red",
            "30Rnd_556x45_Stanag_Sand_Green",
            "30Rnd_556x45_Stanag_Sand_Yellow",
            "30Rnd_556x45_Stanag_Sand_IR",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Sand_Tracer_IR"
        };*/
        { // 5.56x45mm default Arma3 Mags from official BI tool All-in-one Config Arma3 2.17.151913 https://community.bistudio.com/wiki/Arma:_All-in-one_Config
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_green",
            "30Rnd_556x45_Stanag_red",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "30Rnd_556x45_Stanag_Sand",
            "30Rnd_556x45_Stanag_Sand_green",
            "30Rnd_556x45_Stanag_Sand_red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "30Rnd_556x45_Stanag_Sand_Tracer_Yellow"
        };
        JCA_Magazines[]= // Weapon initSpeed -1 with ACE_barrelLength 508mm (20"): 926, 940, 990, 838, 950, 1030, 283m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_30Rnd_556x45 magazines initSpeed
        { // All 5.56x45mm JCA Mags
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
    };
    class JCA_SR_762x51
    {
        JCA_Magazines[]= // Weapon initSpeed -1 with ACE_barrelLength 508mm (20"): 790, 930, 331 m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_20Rnd_762x51 magazines and ACE3 ACE_10Rnd_762x51_Mk316_Mod_0_Mag initSpeed
        {
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG"
        };
    };
    class JCA_AWM_338LM // Weapon initSpeed -1 with ACE_barrelLength 685.8mm (27"), 906, 896m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM magazines initSpeed
    {
        JCA_Magazines[]=
        {
            "JCA_5Rnd_338LM_AWM_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag",
            "JCA_5Rnd_338LM_AWM_AP_Mag",
            "JCA_5Rnd_338LM_AWM_API_Mag"
        };
    };
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    class InventoryMuzzleItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryUnderItem_Base_F;
    class ItemCore;
    class Pistol;
    class Rifle;
    class Pistol_Base_F: Pistol
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class JCA_hgun_P320_base_F: Pistol_Base_F // P320 Compact, United States Army SIG Sauer M18 https://en.wikipedia.org/wiki/SIG_Sauer_M17
    {
        ACE_barrelLength=99; // 3.9" P320 Compact (3D model SIG Sauer P320 RXP Compact by Michael Egorov) https://www.sigsauer.com/p320-compact.html
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // 361, 300m/s, 99mm barrel, according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 380
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_15Rnd_9x19_P320C_FMJ_Mag",
            "JCA_15Rnd_9x19_P320C_JHP_Mag",
            "JCA_15Rnd_9x19_P320C_Red_Mag",
            "JCA_15Rnd_9x19_P320C_Green_Mag",
            "JCA_15Rnd_9x19_P320C_Yellow_Mag",
            "JCA_15Rnd_9x19_P320C_IR_Mag"
        };
        magazineWell[]=
        {
            "JCA_P320_Compact_9x19"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.001527; // 9.34 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00435 (14.95 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=16.3; // 754g with magazine https://www.sigsauer.com/p320-compact.html, JCA 23
        };
    };
    class JCA_hgun_P226_base_F: Pistol_Base_F // U.S. Navy SEALs P226 MK25 https://www.sigsauer.com/p226-mk25-full-size.html
    {
        ACE_barrelLength=112; // 4.4" P226 https://cdn.bfldr.com/EN1VTHA0/at/k4vxwr73g8mj5bt485mh8bcz/2024_DSG_CATALOG__6-3-24_SL.pdf#page=15
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        initSpeed=-1; // 378, 311m/s, 112mm barrel, according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 380
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_15Rnd_9x19_P226_FMJ_Mag",
            "JCA_15Rnd_9x19_P226_JHP_Mag",
            "JCA_15Rnd_9x19_P226_SUB_Mag",
            "JCA_15Rnd_9x19_P226_Red_Mag",
            "JCA_15Rnd_9x19_P226_Green_Mag",
            "JCA_15Rnd_9x19_P226_Yellow_Mag",
            "JCA_15Rnd_9x19_P226_IR_Mag"
        };
        magazineWell[]=
        {
            "JCA_P226_9x19"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.001138; // 6.96 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.0037 (12.72 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=21.3; // 964g with magazine https://www.sigsauer.com/p226-mk25-full-size.html, JCA 27
        };
    };
    class JCA_smg_MP5_base_F: Rifle_Short_Base_F // https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/Submachine%20guns/MP5?section=variants&s=true
    {
        ACE_barrelLength=225; // 8.858"
        ACE_barrelTwist=250; // CIP twist https://bobp.cip-bobp.org/uploads/tdcc/tab-iv/tabivcal-en-page28.pdf
        ACE_RailHeightAboveBore=3.74837;  // from ACE3 checkScopes.sqf
        initSpeed=-1; // 428m/s, 225mm barrel, according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 375
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag"
        };
        magazineWell[]=
        {
            "JCA_MP5_9x19"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000765; // 4.68 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00116 (3.99 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000765; // 4.68 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00116 (3.99 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=67.9; // 3080g w/o magazine https://de.wikipedia.org/wiki/HK_MP5, JCA 70
        };
    };
    class JCA_smg_MP5_AFG_base_F: JCA_smg_MP5_base_F
    {
    };
    class JCA_smg_MP5_VFG_base_F: JCA_smg_MP5_base_F
    {
    };
    class JCA_smg_MP5_FL_base_F: JCA_smg_MP5_base_F
    {
    };
    class JCA_smg_MP5_AFG_sand_F: JCA_smg_MP5_AFG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_smg_MP5_VFG_sand_F: JCA_smg_MP5_VFG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_smg_MP5_FL_sand_F: JCA_smg_MP5_FL_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_9x19_MP5_FMJ_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Sand_Mag",
            "JCA_30Rnd_9x19_MP5_FMJ_Mag",
            "JCA_30Rnd_9x19_MP5_JHP_Mag",
            "JCA_30Rnd_9x19_MP5_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_IR_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Red_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Green_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_Yellow_Mag",
            "JCA_30Rnd_9x19_MP5_Tracer_IR_Mag"
        };
    };
    class JCA_arifle_M4A1_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=368.3; // 14.5" 3D model barrel length
        ACE_railHeightAboveBore=2.42081; // from ACE3 checkScopes.sqf
        initSpeed=-0.942679; // 873, 886, 933, 790, 896, 971, 267m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=63.6; // 2885g https://fnamerica.com/products/rifles/fn-m4a1/, JCA 75
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000540; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000540; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_M4A1_GL_base_F: JCA_arifle_M4A1_base_F
    {
        ACE_barrelLength=368.3; // 14.5" 3D model barrel length
        initSpeed=-0.942679; // 873, 886, 933, 790, 896, 971, 267m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=93.6; // M203 1.36kg https://en.wikipedia.org/wiki/M203_grenade_launcher, JCA 95
        };
    };
    class JCA_arifle_M4A1_short_base_F: JCA_arifle_M4A1_base_F
    {
        ACE_barrelLength=261.62; // 10.3" CQBR barrel length
        initSpeed=-0.8545; // 791, 803, 846, 716, 812, 880, 242m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60; // https://en.wikipedia.org/wiki/Close_Quarters_Battle_Receiver, JCA 60
        };
        class Single: Single
        {
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00073 (2.51 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00073 (2.51 MOA)
        };
    };
    class JCA_arifle_M4A1_sand_F: JCA_arifle_M4A1_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG"
        };
    };
    class JCA_arifle_M4A1_GL_sand_F: JCA_arifle_M4A1_GL_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG"
        };
    };
    class JCA_arifle_M4A1_short_sand_F: JCA_arifle_M4A1_short_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG"
        };
    };
    class JCA_arifle_M4A4_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=261.62; // 10.3" CQBR barrel length
        ACE_railHeightAboveBore=2.42081; // from ACE3 checkScopes.sqf
        initSpeed=-0.8545; // 791, 803, 846, 716, 812, 880, 242m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=60; // 2.72kg https://en.wikipedia.org/wiki/Close_Quarters_Battle_Receiver, JCA 60
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000636; // 3.89 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_M4A4_AFG_base_F: JCA_arifle_M4A4_base_F
    {
    };
    class JCA_arifle_M4A4_VFG_base_F: JCA_arifle_M4A4_base_F
    {
    };
    class JCA_arifle_M4A4_GL_base_F: JCA_arifle_M4A4_base_F
    {
        ACE_barrelLength=261.62; // 10.3" CQBR barrel length
        initSpeed=-0.8545; // 791, 803, 846, 716, 880, 242m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=90; // M203 1.36kg https://en.wikipedia.org/wiki/M203_grenade_launcher, JCA 80
        };
    };
    class JCA_arifle_M4A4_AFG_sand_F: JCA_arifle_M4A4_AFG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A4_VFG_sand_F: JCA_arifle_M4A4_VFG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M4A4_GL_sand_F: JCA_arifle_M4A4_GL_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW"
        };
    };
    class JCA_arifle_M16A4_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=508; // 20"
        ACE_railHeightAboveBore=2.42081; // from ACE3 checkScopes.sqf
        initSpeed=-1; // 926, 940, 990, 838, 950, 1030, 283m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 880
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=87.9; // https://fnamerica.com/products/rifles/fn-m16a4/, JCA 85
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000494; // 3.02 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755,JCA 0.00058 (1.99 MOA)
        };
        class Burst: Mode_Burst
        {
            dispersion=0.000494; // 3.02 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755,JCA 0.00087 (2.99 MOA)
        };
    };
    class JCA_arifle_M16A4_FG_base_F: JCA_arifle_M16A4_base_F
    {
        initSpeed=-1; // 926, 940, 990, 838, 950, 1030, 283m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=87.9; // https://fnamerica.com/products/rifles/fn-m16a4/, JCA 85
        };
    };
    class JCA_arifle_M16A4_GL_base_F: JCA_arifle_M16A4_base_F
    {
        initSpeed=-1; // 926, 940, 990, 838, 950, 1030, 283m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=117.9; // M203 1.36kg https://en.wikipedia.org/wiki/M203_grenade_launcher, JCA 105
        };
    };
    class JCA_arifle_M16A4_sand_F: JCA_arifle_M16A4_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG"
        };
    };
    class JCA_arifle_M16A4_FG_sand_F: JCA_arifle_M16A4_FG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG"
        };
    };
    class JCA_arifle_M16A4_GL_sand_F: JCA_arifle_M16A4_GL_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_30Rnd_556x45_Stanag_Sand_Red",
            "JCA_30Rnd_556x45_Stanag_Sand",
            "JCA_30Rnd_556x45_Stanag_Sand_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Sand_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_Sand_M855A1",
            "JCA_30Rnd_556x45_Stanag_Sand_M193",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk262",
            "JCA_30Rnd_556x45_Stanag_Sand_Mk318",
            "JCA_30Rnd_556x45_Stanag_Sand_M995AP",
            "JCA_30Rnd_556x45_Stanag_Sand_UW",
            "JCA_30Rnd_556x45_Stanag",
            "JCA_30Rnd_556x45_Stanag_Red",
            "JCA_30Rnd_556x45_Stanag_Green",
            "JCA_30Rnd_556x45_Stanag_Yellow",
            "JCA_30Rnd_556x45_Stanag_IR",
            "JCA_30Rnd_556x45_Stanag_Tracer_Red",
            "JCA_30Rnd_556x45_Stanag_Tracer_Green",
            "JCA_30Rnd_556x45_Stanag_Tracer_Yellow",
            "JCA_30Rnd_556x45_Stanag_Tracer_IR",
            "JCA_30Rnd_556x45_Stanag_M855A1",
            "JCA_30Rnd_556x45_Stanag_M193",
            "JCA_30Rnd_556x45_Stanag_Mk262",
            "JCA_30Rnd_556x45_Stanag_Mk318",
            "JCA_30Rnd_556x45_Stanag_M995AP",
            "JCA_30Rnd_556x45_Stanag_UW",
            "JCA_30Rnd_556x45_sand_PMAG",
            "JCA_30Rnd_556x45_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_IR_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_sand_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_sand_PMAG",
            "JCA_30Rnd_556x45_M855A1_sand_PMAG",
            "JCA_30Rnd_556x45_M193_sand_PMAG",
            "JCA_30Rnd_556x45_Mk262_sand_PMAG",
            "JCA_30Rnd_556x45_Mk318_sand_PMAG",
            "JCA_30Rnd_556x45_M995AP_sand_PMAG",
            "JCA_30Rnd_556x45_UW_sand_PMAG",
            "JCA_30Rnd_556x45_PMAG",
            "JCA_30Rnd_556x45_Red_PMAG",
            "JCA_30Rnd_556x45_Green_PMAG",
            "JCA_30Rnd_556x45_Yellow_PMAG",
            "JCA_30Rnd_556x45_IR_PMAG",
            "JCA_30Rnd_556x45_Tracer_Red_PMAG",
            "JCA_30Rnd_556x45_Tracer_Green_PMAG",
            "JCA_30Rnd_556x45_Tracer_Yellow_PMAG",
            "JCA_30Rnd_556x45_Tracer_IR_PMAG",
            "JCA_30Rnd_556x45_M855A1_PMAG",
            "JCA_30Rnd_556x45_M193_PMAG",
            "JCA_30Rnd_556x45_Mk262_PMAG",
            "JCA_30Rnd_556x45_Mk318_PMAG",
            "JCA_30Rnd_556x45_M995AP_PMAG",
            "JCA_30Rnd_556x45_UW_PMAG"
        };
    };
    class JCA_arifle_SR10_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=254; // 1:10"
        ACE_barrelLength=368.3; // 14.5" 3D model barrel length
        ACE_railHeightAboveBore=2.39586;
        initSpeed=-0.975261; // 770, 907, 323m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 715
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=120; // JCA (5.44 kg)
        };
        class single: Mode_SemiAuto
        {
            dispersion=0.000389; // 2.38 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00066 (2.27 MOA)
        };
    };
    class JCA_arifle_SR10_AFG_base_F: JCA_arifle_SR10_base_F
    {
    };
    class JCA_arifle_SR10_VFG_base_F: JCA_arifle_SR10_base_F
    {
    };
    class JCA_arifle_SR10_AFG_sand_F: JCA_arifle_SR10_AFG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG"
        };
    };
    class JCA_arifle_SR10_VFG_sand_F: JCA_arifle_SR10_VFG_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG"
        };
    };
    class JCA_arifle_SR25_base_F: Rifle_Base_F // https://en.wikipedia.org/wiki/SR-25
    {
        ACE_barrelTwist=285.75; // 1:11.25"
        ACE_barrelLength=508; // 20" 3D model barrel length
        ACE_railHeightAboveBore=2.4188499; // from ACE3 checkScopes.sqf
        initSpeed=-1; // 790, 930, 331m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), JCA 715
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=153; // empty weight 15.3 lb (6.9 kg), JCA 138
        };
        class single: Mode_SemiAuto
        {
            dispersion=0.000222; // 1.36 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00066 (2.27 MOA)
        };
    };
    class JCA_arifle_SR25_sand_F: JCA_arifle_SR25_base_F
    {
        magazines[]=
        { // Priority to JCA magazines first
            "JCA_20Rnd_762x51_sand_SMAG",
            "JCA_20Rnd_762x51_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_IR_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_SMAG",
            "JCA_20Rnd_762x51_M993AP_sand_SMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_SMAG",
            "JCA_20Rnd_762x51_SMAG",
            "JCA_20Rnd_762x51_Red_SMAG",
            "JCA_20Rnd_762x51_Green_SMAG",
            "JCA_20Rnd_762x51_Yellow_SMAG",
            "JCA_20Rnd_762x51_IR_SMAG",
            "JCA_20Rnd_762x51_Tracer_Red_SMAG",
            "JCA_20Rnd_762x51_Tracer_Green_SMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_SMAG",
            "JCA_20Rnd_762x51_Tracer_IR_SMAG",
            "JCA_20Rnd_762x51_M993AP_SMAG",
            "JCA_20Rnd_762x51_Subsonic_SMAG",
            "JCA_20Rnd_762x51_sand_PMAG",
            "JCA_20Rnd_762x51_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_IR_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_sand_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_sand_PMAG",
            "JCA_20Rnd_762x51_M993AP_sand_PMAG",
            "JCA_20Rnd_762x51_Subsonic_sand_PMAG",
            "JCA_20Rnd_762x51_PMAG",
            "JCA_20Rnd_762x51_Red_PMAG",
            "JCA_20Rnd_762x51_Green_PMAG",
            "JCA_20Rnd_762x51_Yellow_PMAG",
            "JCA_20Rnd_762x51_IR_PMAG",
            "JCA_20Rnd_762x51_Tracer_Red_PMAG",
            "JCA_20Rnd_762x51_Tracer_Green_PMAG",
            "JCA_20Rnd_762x51_Tracer_Yellow_PMAG",
            "JCA_20Rnd_762x51_Tracer_IR_PMAG",
            "JCA_20Rnd_762x51_M993AP_PMAG",
            "JCA_20Rnd_762x51_Subsonic_PMAG"
        };
    };
    class JCA_srifle_AWM_base_F: Rifle_Long_Base_F
    {
        ACE_barrelTwist=279.4; // 1:11" optimized for bullets around 250gr, for 300gr twist rate 1:10" or faster
        ACE_barrelLength=685.8; // 27"
        ACE_railHeightAboveBore=1.64895; // from ACE3 checkScopes.sqf
        ace_overheating_closedBolt=1;
        initSpeed=-1; // 906, 896 m/s at ICAO standart conditions (15°C, 1013.25 hPa, 0%) according to JCA_5Rnd_338LM_Mag, JCA_5Rnd_338LM_AP_Mag and JCA_5Rnd_338LM_API_Mag initSpeed
        magazines[]=
        {
            "JCA_5Rnd_338LM_AWM_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Red_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Green_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_Yellow_Mag",
            "JCA_5Rnd_338LM_AWM_Tracer_IR_Mag",
            "JCA_5Rnd_338LM_AWM_AP_Mag",
            "JCA_5Rnd_338LM_AWM_API_Mag"
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000209; // average dispersion from .338 LM Scenar, AP and API https://www.nammo.com/: 1.28 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00022 (0.76 MOA)
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=149.9; // 6.8kg https://www.army.mod.uk/equipment/small-arms-and-support-weapons/, JCA 105
        };
    };
    class JCA_optic_MRO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=2.32987; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_MPO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=1.40109; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_PRO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=1.72206; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_ICO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.33929; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_AHO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.80373; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_ARO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=2.98032; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_AICO_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.15842; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_ACOG_base: ItemCore
    {
        ACE_ScopeHeightAboveRail=4.4543; // from ACE3 checkScopes.sqf
    };
    class JCA_optic_MRPS_base: ItemCore
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=4.51714; // from ACE3 checkScopes.sqf
        descriptionShort="Medium Range Precision Sight<br />Magnification: 4x-10x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=13.1; // 21 oz (595g), JCA 14
            class OpticsModes
            {
                class MRPS
                {
                    opticsZoomMin=0.025649; // accurate mRad reticle calibration at magnification 9.7x, JCA 0.0227 (11x)
                    opticsZoomMax=0.060328; // accurate mRad reticle calibration at magnification 4.1x, JCA 0.0536 (4.7x)
                    opticsZoomInit=0.060328; // accurate mRad reticle calibration at magnification 4.1x, JCA 0.0536 (4.7x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2000;
                    discretefov[]={0.060328,0.025649}; // {4.1x,9.7x}
                };
            };
        };
    };
    class JCA_optic_HPPO_base: ItemCore
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=4.89867; // from ACE3 checkScopes.sqf, JCA 4.2098
        descriptionShort="High Power Precision Optic<br />Magnification: 11x-23x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=23.8; // S&B 5-25x56 1080g, JCA 18
            class OpticsModes
            {
                class HPPO
                {
                    opticsZoomMin=0.010992; // accurate mRad reticle calibration at magnification 22.7x, JCA 0.01 (25x)
                    opticsZoomMax=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    opticsZoomInit=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2400;
                    discretefov[]={0.021963,0.010992}; // {11.4x, 22.7x}
                };
            };
        };
    };
    class JCA_optic_HPPO_RAD_base: ItemCore
    {
        ACE_ScopeZeroRange=100; // Always keep vanilla discreteDistance 100 same that Range Card zeroed distance, to increase eventually zeroing distance: Interaction Menu -> "Set zero adjustment" (AB enabled only)
        ACE_ScopeHeightAboveRail=4.89867; // from ACE3 checkScopes.sqf, JCA 4.2098
        descriptionShort="High Power Precision Optic - Range Acquisition Device<br />Magnification: 11x-23x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass=33.1; // S&B 5-25x56 1080g + Wilcox RAPTAR-S 420g, JCA 24
            class OpticsModes
            {
                class HPPO
                {
                    opticsZoomMin=0.010992; // accurate mRad reticle calibration at magnification 22.7x, JCA 0.01 (25x)
                    opticsZoomMax=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    opticsZoomInit=0.021963; // accurate mRad reticle calibration at magnification 11.4x, JCA 0.042 (6x)
                    discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
                    discreteDistanceInitIndex=0;
                    distanceZoomMin=100;
                    distanceZoomMax=2400;
                    discretefov[]={0.021963,0.010992}; // {11.4x, 22.7x}
                };
            };
        };
    };
    class JCA_muzzle_snds_enhanced_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_9MM_enhanced_black: JCA_muzzle_snds_enhanced_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=5.5; // SilencerCo Osprey 9 8.8oz, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_enhanced_sand: JCA_muzzle_snds_enhanced_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=5.5; // SilencerCo Osprey 9 8.8oz, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_enhanced_olive: JCA_muzzle_snds_enhanced_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=5.5; // SilencerCo Osprey 9 8.8oz, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_tactical_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_9MM_tactical_black: JCA_muzzle_snds_tactical_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=6; // muzzle_snds_L, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_tactical_sand: JCA_muzzle_snds_tactical_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=6; // muzzle_snds_L, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_9MM_tactical_olive: JCA_muzzle_snds_tactical_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=6; // muzzle_snds_L, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_MP5_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_MP5_black: JCA_muzzle_snds_MP5_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=9.5; // Heckler & Koch KAC-Navy MP5N 9mm Suppressor 0.95 lbs, muzzle_snds_L 6, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_MP5_sand: JCA_muzzle_snds_MP5_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=9.5; // Heckler & Koch KAC-Navy MP5N 9mm Suppressor 0.95 lbs, muzzle_snds_L 6, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_MP5_olive: JCA_muzzle_snds_MP5_base // Sound Suppressor 9mm, muzzle_snds_L
    {
        class ItemInfo: ItemInfo
        {
            mass=9.5; // Heckler & Koch KAC-Navy MP5N 9mm Suppressor 0.95 lbs, muzzle_snds_L 6, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03; // muzzle_snds_L, JCA 0.04, muzzle_snds_H 0.04
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_L, JCA 0.2, muzzle_snds_H 0.2
    };
    class JCA_muzzle_snds_advanced_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_556_advanced_black: JCA_muzzle_snds_advanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2, muzzle_snds_M 0.2
    };
    class JCA_muzzle_snds_556_advanced_sand: JCA_muzzle_snds_advanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2, muzzle_snds_M 0.2
    };
    class JCA_muzzle_snds_556_advanced_olive: JCA_muzzle_snds_advanced_base // Sound Suppressor 5.56mm, muzzle_snds_M
    {
        class ItemInfo: ItemInfo
        {
            mass=8; // muzzle_snds_M, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        inertia=0.1; // muzzle_snds_M, JCA 0.2, muzzle_snds_M 0.2
    };
    class JCA_muzzle_snds_762_tactical_black: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_sand: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_762_tactical_olive: JCA_muzzle_snds_tactical_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=12.3; // Knights Armament KAC Rifle Suppressors 19.75oz (560g), JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_AWM_black: JCA_muzzle_snds_AWM_base // Sound Suppressor .338, muzzle_snds_338_black
    {
        class ItemInfo: ItemInfo
        {
            mass=10.5; // Accuracy International Tactical Moderator 475g, only compatible with the Accuracy International Tactical muzzle break, not the standard muzzle break, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_338_black 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_338_black 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_338_black 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_338_black 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_sand: JCA_muzzle_snds_AWM_base // Sound Suppressor .338, muzzle_snds_338_black
    {
        class ItemInfo: ItemInfo // muzzle_snds_338_black
        {
            mass=10.5; // Accuracy International Tactical Moderator 475g, only compatible with the Accuracy International Tactical muzzle break, not the standard muzzle break, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_338_black 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_338_black 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_338_black 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_338_black 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_AWM_olive: JCA_muzzle_snds_AWM_base // Sound Suppressor .338, muzzle_snds_338_black
    {
        class ItemInfo: ItemInfo // muzzle_snds_338_black
        {
            mass=10.5; // Accuracy International Tactical Moderator 475g, only compatible with the Accuracy International Tactical muzzle break, not the standard muzzle break, JCA 12
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_338_black 1.1
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_338_black 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_338_black 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_338_black 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_base: ItemCore
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class JCA_muzzle_snds_SR25_black: JCA_muzzle_snds_SR25_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=18.7; // Knights Armament KAC Mk11 7.62 Suppressor, weight 29.9 oz (848g), JCA 10
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3; // muzzle_snds_B, JCA 0.5, muzzle_snds_570 0.5
                audibleFire=0.04; // muzzle_snds_B, JCA 0.3, muzzle_snds_570 0.3
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_sand: JCA_muzzle_snds_SR25_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=18.7; // Knights Armament KAC Mk11 7.62 Suppressor, weight 29.9 oz (848g), JCA 10
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3; // muzzle_snds_B, JCA 0.5, muzzle_snds_570 0.5
                audibleFire=0.04; // muzzle_snds_B, JCA 0.3, muzzle_snds_570 0.3
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_muzzle_snds_SR25_olive: JCA_muzzle_snds_SR25_base // Sound Suppressor 7.62mm, muzzle_snds_B
    {
        class ItemInfo: ItemInfo
        {
            mass=18.7; // Knights Armament KAC Mk11 7.62 Suppressor, weight 29.9 oz (848g), JCA 10
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3; // muzzle_snds_B, JCA 0.5, muzzle_snds_570 0.5
                audibleFire=0.04; // muzzle_snds_B, JCA 0.3, muzzle_snds_570 0.3
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_B 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_B 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
    };
    class JCA_bipod_04_base: ItemCore
    {
        class ItemInfo: InventoryUnderItem_Base_F
        {
            mass=8.8; // Harris Engineering S-BRM Bipod, weight 14 oz (397g), JCA 10
        };
    };
    class JCA_bipod_AWM_base: ItemCore
    {
        class ItemInfo: InventoryUnderItem_Base_F
        {
            mass=13; // Accuracy International AW/AWM Steel Bipod 590g, JCA 10
        };
    };
    class muzzle_snds_H: ItemCore // Sound Suppressor 6.5mm
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class muzzle_snds_L: muzzle_snds_H // Sound Suppressor 9mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=6;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_L 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.03;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_L 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_L 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_L 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
    class muzzle_snds_M: muzzle_snds_H // Sound Suppressor 5.56mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=8;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
    class muzzle_snds_B: muzzle_snds_H // Sound Suppressor 7.62mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=12;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.2;
    };
};
class ACE_ATragMX_Presets
{
    class ld3k_JCA_B_338LM_Ball
    {
        preset[]=
        {
            "JCA M115A3",
            906,
            100,
            0.0732268,
            -0.00061662,
            6.55,
            0,
            2,
            10,
            120,
            0,
            0,
            16.2,
            8.95,
            27.94,
            0.648,
            1,
            "ICAO",

            {
                {-15,903},
                {0,904},
                {10,905},
                {15,906},
                {25,909},
                {30,911},
                {35,913}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_B_338LM_AP_Ball
    {
        preset[]=
        {
            "JCA M115A3 AP",
            906,
            100,
            0.0734488,
            -0.00070864,
            6.55,
            0,
            2,
            10,
            120,
            0,
            0,
            16.1,
            9.28,
            27.94,
            0.564,
            1,
            "ICAO",

            {
                {-15,903},
                {0,904},
                {10,905},
                {15,906},
                {25,909},
                {30,911},
                {35,913}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_B_338LM_API_Ball
    {
        preset[]=
        {
            "JCA M115A3 API",
            896,
            100,
            0.074292,
            -0.0007233,
            6.55,
            0,
            2,
            10,
            120,
            0,
            0,
            16.4,
            9.03,
            27.94,
            0.554,
            1,
            "ICAO",

            {
                {-15,893},
                {0,894},
                {10,895},
                {15,896},
                {25,899},
                {30,901},
                {35,903}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR25_Sierra_MatchKing
    {
        preset[]=
        {
            "JCA Mk11 Mk316",
            790,
            100,
            0.0874179,
            -0.00084907,
            6.94,
            0,
            2,
            10,
            120,
            0,
            0,
            11.34,
            8.31,
            28.575,
            0.489,
            1,
            "ICAO",

            {
                {-15,787},
                {0,788},
                {10,789},
                {15,790},
                {25,793},
                {30,795},
                {35,797}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR25_M993AP
    {
        preset[]=
        {
            "JCA Mk11 AP",
            930,
            100,
            0.0747754,
            -0.00110502,
            6.94,
            0,
            2,
            10,
            120,
            0,
            0,
            8.23,
            7.36,
            28.575,
            0.359,
            1,
            "ICAO",

            {
                {-15,911},
                {0,918},
                {10,925},
                {15,930},
                {25,944},
                {30,953},
                {35,964}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR25_Lapua_B416
    {
        preset[]=
        {
            "JCA Mk11 Subso",
            331,
            100,
            0.306279,
            -0.00049496,
            6.94,
            0,
            2,
            10,
            120,
            0,
            0,
            12.96,
            8.17,
            28.575,
            0.518,
            1,
            "ICAO",

            {
                {-15,329},
                {0,330},
                {10,331},
                {15,331},
                {25,333},
                {30,334},
                {35,335}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR10_Sierra_MatchKing
    {
        preset[]=
        {
            "JCA SR10 Mk316",
            770,
            100,
            0.0898099,
            -0.00084907,
            6.91,
            0,
            2,
            10,
            120,
            0,
            0,
            11.34,
            8.31,
            25.4,
            0.489,
            1,
            "ICAO",

            {
                {-15,766},
                {0,768},
                {10,769},
                {15,770},
                {25,773},
                {30,775},
                {35,777}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR10_Sierra_M993AP
    {
        preset[]=
        {
            "JCA SR10 AP",
            907,
            100,
            0.0764216,
            -0.00110502,
            6.91,
            0,
            2,
            10,
            120,
            0,
            0,
            8.23,
            7.37,
            25.4,
            0.359,
            1,
            "ICAO",

            {
                {-15,888},
                {0,895},
                {10,902},
                {15,907},
                {25,920},
                {30,930},
                {35,941}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
    class ld3k_JCA_arifle_SR10_Lapua_B416
    {
        preset[]=
        {
            "JCA SR10 Subso",
            323,
            100,
            0.318686,
            -0.00049496,
            6.91,
            0,
            2,
            10,
            120,
            0,
            0,
            12.96,
            8.17,
            25.4,
            0.518,
            1,
            "ICAO",

            {
                {-15,321},
                {0,322},
                {10,322},
                {15,323},
                {25,324},
                {30,325},
                {35,326}
            },

            {
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0},
                {0,0}
            }
        };
    };
};

#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float       
// TEXCOORD                 0   xy          1     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[128]
// Embedded Data:
//  0x00000080 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x0000007b - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 3
sample_indexable(texture2d)(float,float,float,float) r0.xyzw, v1.xyxx, t0.xyzw, s0
mul r0.xyz, r0.xyzx, cb0[0].xxxx
mov o0.w, r0.w
mad r1.xyz, r0.xyzx, l(2.510000, 2.510000, 2.510000, 0.000000), l(0.030000, 0.030000, 0.030000, 0.000000)
mul r1.xyz, r0.xyzx, r1.xyzx
mad r2.xyz, r0.xyzx, l(2.430000, 2.430000, 2.430000, 0.000000), l(0.590000, 0.590000, 0.590000, 0.000000)
mad r0.xyz, r0.xyzx, r2.xyzx, l(0.140000, 0.140000, 0.140000, 0.000000)
div_sat r0.xyz, r1.xyzx, r0.xyzx
log r0.xyz, r0.xyzx
mul r0.xyz, r0.xyzx, l(0.454545, 0.454545, 0.454545, 0.000000)
exp o0.xyz, r0.xyzx
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[128], bundle is:[182] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_PSACESFilmic_SRGB.pdb
// Shader Semantic Hash      : 0x3c10d0c380ea265d
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask  3, param0, paramSlot1, DefaultVal={0,0,0,0}

codeLenInByte        = 268 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 3;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
NumVgprs             = 10;
NumSgprs             = 20;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000001
SPIC:NUM_INTERP             = 1
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0xF8, dwords=0x3E)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, off, off, off done vm         // 000000000008: F8001801 00000000
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v1, off, off done vm          // 000000000008: F8001803 00000100
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v3, off, off done vm          // 000000000008: F8001803 00000300
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 000000000000: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 000000000004: 5E020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v0, v1                      // 000000000000: 5C000300
  v_cvt_pknorm_u16_f32  v1, v2, v3                      // 000000000004: 5C020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v0, v1                      // 000000000000: 5A000300
  v_cvt_pknorm_i16_f32  v1, v2, v3                      // 000000000004: 5A020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v0, v1                          // 000000000000: 60000300
  v_cvt_pk_u16_u32  v1, v2, v3                          // 000000000004: 60020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v0, v1                          // 000000000000: 62000300
  v_cvt_pk_i16_i32  v1, v2, v3                          // 000000000004: 62020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v0, v1, v2, v3 done vm            // 000000000008: F800180F 03020100
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[16:17], exec                          // 000000000000: BE90047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_mov_b32     m0, s2                                  // 000000000008: BEFC0302
  s_load_dwordx16  s[0:15], s[0:1], 0x00                // 00000000000C: C1000100
  v_interp_p1_f32  v2, v0, attr0.x                      // 000000000010: C8080000
  v_interp_p2_f32  v2, v1, attr0.x                      // 000000000014: C8090001
  v_interp_p1_f32  v3, v0, attr0.y                      // 000000000018: C80C0100
  v_interp_p2_f32  v3, v1, attr0.y                      // 00000000001C: C80D0101
  s_waitcnt     lgkmcnt(0)                              // 000000000020: BF8C007F
  image_sample  v[0:3], v[2:3], s[0:7], s[8:11] dmask:0xf // 000000000024: F0800F00 00400002
  s_buffer_load_dword  s0, s[12:15], 0x00               // 00000000002C: C2000D00
  s_waitcnt     vmcnt(0) & lgkmcnt(0)                   // 000000000030: BF8C0070
  v_mul_legacy_f32  v0, s0, v0                          // 000000000034: 0E000000
  v_mul_legacy_f32  v1, s0, v1                          // 000000000038: 0E020200
  v_mul_legacy_f32  v2, s0, v2                          // 00000000003C: 0E040400
  v_mov_b32     v4, 0x3cf5c28f                          // 000000000040: 7E0802FF 3CF5C28F
  v_madmk_f32   v5, v0, 0x4020a3d7, v4                  // 000000000048: 400A0900 4020A3D7
  v_madmk_f32   v6, v1, 0x4020a3d7, v4                  // 000000000050: 400C0901 4020A3D7
  v_madmk_f32   v4, v2, 0x4020a3d7, v4                  // 000000000058: 40080902 4020A3D7
  v_mul_legacy_f32  v5, v0, v5                          // 000000000060: 0E0A0B00
  v_mul_legacy_f32  v6, v1, v6                          // 000000000064: 0E0C0D01
  v_mul_legacy_f32  v4, v2, v4                          // 000000000068: 0E080902
  v_mov_b32     v7, 0x3f170a3d                          // 00000000006C: 7E0E02FF 3F170A3D
  v_madmk_f32   v8, v0, 0x401b851f, v7                  // 000000000074: 40100F00 401B851F
  v_madmk_f32   v9, v1, 0x401b851f, v7                  // 00000000007C: 40120F01 401B851F
  v_madmk_f32   v7, v2, 0x401b851f, v7                  // 000000000084: 400E0F02 401B851F
  v_madak_f32   v0, v0, v8, 0x3e0f5c29                  // 00000000008C: 42001100 3E0F5C29
  v_madak_f32   v1, v1, v9, 0x3e0f5c29                  // 000000000094: 42021301 3E0F5C29
  v_madak_f32   v2, v2, v7, 0x3e0f5c29                  // 00000000009C: 42040F02 3E0F5C29
  v_rcp_f32     v0, v0                                  // 0000000000A4: 7E005500
  v_mul_f32     v0, v5, v0 clamp                        // 0000000000A8: D2100800 00020105
  v_rcp_f32     v1, v1                                  // 0000000000B0: 7E025501
  v_mul_f32     v1, v6, v1 clamp                        // 0000000000B4: D2100801 00020306
  v_rcp_f32     v2, v2                                  // 0000000000BC: 7E045502
  v_mul_f32     v2, v4, v2 clamp                        // 0000000000C0: D2100802 00020504
  v_log_f32     v0, v0                                  // 0000000000C8: 7E004F00
  v_log_f32     v1, v1                                  // 0000000000CC: 7E024F01
  v_log_f32     v2, v2                                  // 0000000000D0: 7E044F02
  s_mov_b32     s0, 0x3ee8ba2f                          // 0000000000D4: BE8003FF 3EE8BA2F
  v_mul_legacy_f32  v0, s0, v0                          // 0000000000DC: 0E000000
  v_mul_legacy_f32  v1, s0, v1                          // 0000000000E0: 0E020200
  v_mul_legacy_f32  v2, s0, v2                          // 0000000000E4: 0E040400
  v_exp_f32     v0, v0                                  // 0000000000E8: 7E004B00
  v_exp_f32     v1, v1                                  // 0000000000EC: 7E024B01
  v_exp_f32     v2, v2                                  // 0000000000F0: 7E044B02
  s_mov_b64     exec, s[16:17]                          // 0000000000F4: BEFE0410
  v_cvt_pkrtz_f16_f32  v0, v0, v1                       // 0000000000F8: 5E000300
  v_cvt_pkrtz_f16_f32  v1, v2, v3                       // 0000000000FC: 5E020702
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000100: F8001C0F 00000100
  s_endpgm                                              // 000000000108: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   10
//  NumSRegs:                   20
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   90
//  CycleSimNWaves:             90
//  Code Size:                  268
//Assembler Counts:
//  num_32bit_ops                     : 45
//  num_64bit_ops                     : 5
//  num_alu                           : 38
//  num_fc                            : 10
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 3
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 5
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 11
//  num_inst_vop2                     : 20
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 4
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 10
// m_uNumSRegs                       : 20
// m_uSCCodeSize                     : 268
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 90
// m_uCycleSimNWaves                 : 90

// Assembler Counts:
// num_32bit_ops                     : 45
// num_64bit_ops                     : 5
// num_alu                           : 38
// num_fc                            : 10
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 3
// num_inst_sopc                     : 0
// num_inst_sop1                     : 5
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 11
// num_inst_vop2                     : 20
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 4
// num_inst_smem                     : 2
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE ToneMap_PSACESFilmic_SRGB[] =
{
     68,  88,  66,  67, 238, 196, 
    255,  27, 178, 198,  33, 213, 
    243, 223, 110, 186, 172,  26, 
     79, 187,   1,   0,   0,   0, 
     34,   6,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    140,   0,   0,   0, 192,   0, 
      0,   0, 168,   5,   0,   0, 
    184,   5,   0,   0,  73,  83, 
     71,  78,  80,   0,   0,   0, 
      2,   0,   0,   0,   8,   0, 
      0,   0,  56,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  68,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  83,  86,  95,  80, 
    111, 115, 105, 116, 105, 111, 
    110,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171,  79,  83,  71,  78, 
     44,   0,   0,   0,   1,   0, 
      0,   0,   8,   0,   0,   0, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     83,  86,  95,  84,  97, 114, 
    103, 101, 116,   0, 171, 171, 
     83,  72,  69,  88, 224,   4, 
      0,   0,  80,   0,   0,   0, 
     56,   1,   0,   0,  53,  16, 
      0,   0,   5,   0,   0,   0, 
    128,   0,   0,   0,  80,   0, 
      0,   0, 123,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  90,   0,   0,   3, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     98,  16,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
    101,   0,   0,   3, 242,  32, 
     16,   0,   0,   0,   0,   0, 
    104,   0,   0,   2,   3,   0, 
      0,   0,  69,   0,   0, 139, 
    194,   0,   0, 128,  67,  85, 
     21,   0, 242,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      6, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     54,   0,   0,   5, 130,  32, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  15, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0, 215, 163,  32,  64, 
    215, 163,  32,  64, 215, 163, 
     32,  64,   0,   0,   0,   0, 
      2,  64,   0,   0, 143, 194, 
    245,  60, 143, 194, 245,  60, 
    143, 194, 245,  60,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     50,   0,   0,  15, 114,   0, 
     16,   0,   2,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     31, 133,  27,  64,  31, 133, 
     27,  64,  31, 133,  27,  64, 
      0,   0,   0,   0,   2,  64, 
      0,   0,  61,  10,  23,  63, 
     61,  10,  23,  63,  61,  10, 
     23,  63,   0,   0,   0,   0, 
     50,   0,   0,  12, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      2,   0,   0,   0,   2,  64, 
      0,   0,  41,  92,  15,  62, 
     41,  92,  15,  62,  41,  92, 
     15,  62,   0,   0,   0,   0, 
     14,  32,   0,   7, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  47,   0, 
      0,   5, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,  10, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
     47, 186, 232,  62,  47, 186, 
    232,  62,  47, 186, 232,  62, 
      0,   0,   0,   0,  25,   0, 
      0,   5, 114,  32,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  53,  16, 
      0,   0, 184,   0,   0,   0, 
     23,   0,   1,   0,  41,  83, 
     16,   0, 120,   1, 237,  87, 
    207, 107,  19,  65,  20, 126, 
     51, 187, 141,  73, 154, 236, 
    198,  31, 160, 162,  98,  15, 
     82, 244,  80,  21, 143,  82, 
    107, 154, 170,  21, 130,  68, 
    155,  22,  74,  89, 219,  38, 
    233,  66,   3, 109,  19, 154, 
     30,  60, 173, 241, 224,  77, 
    104, 193, 139, 122, 181, 136, 
     71, 143, 226,  33, 213, 122, 
    201, 193, 130, 120, 241,  95, 
     16, 241, 224,  65, 193, 131, 
    180, 190, 111, 157, 137, 219, 
    106, 111,  11,  10, 238,   7, 
    223, 251, 230, 219, 217, 125, 
    243, 118, 103,  15, 243, 138, 
     25, 242,  17, 219, 184, 241, 
      4,  26,  63, 182, 186, 240, 
     73,  16, 117, 241, 152, 197, 
     87, 224,  65,  26, 145, 232, 
    139, 133,  72, 116,  18,   1, 
     55,  72, 162,  36, 203,   1, 
    102, 138, 125, 150,  21, 115, 
    154, 143,  30,  46, 231,  54, 
    222, 220, 207, 241, 144, 176, 
     20, 210,  76,  40, 246,  49, 
    145, 191, 151, 137,  28,  72, 
      7, 104,   5,  12,   4, 134, 
    174,  67, 163, 155, 137,  53, 
     53,  76,  38, 151, 226,   3, 
     26, 204,  65,  46, 194, 159, 
    113, 142, 137, 181, 119,   3, 
    106, 211, 185, 160, 250, 222, 
    224, 218, 127,  11,  63, 235, 
    250,  21,  65, 189,  79,   0, 
    246,  35,   8, 108, 157, 190, 
    180, 170, 246,  81, 127, 223, 
    231, 202, 227, 253, 240, 110, 
     47, 153, 187,  97, 139, 161, 
    126, 155,  14, 180,  71, 254, 
    152, 224, 172, 113,  30, 252, 
    167, 192, 191,   8, 224,  91, 
    224,  95, 196, 183, 177, 153, 
     26, 122, 126,   0, 129, 154, 
    107, 224, 202,  33, 250,   6, 
    167, 189, 216, 225,  13, 120, 
     36,  12, 122, 108, 158,  65, 
    147, 114, 143, 156, 180, 143, 
    170, 121, 131,  28, 246,  78, 
    192,  79, 176, 159,   8, 248, 
    105, 246, 211,   1,  95, 102, 
     95, 238, 120, 149, 223, 246, 
    215, 147,   6, 246, 154,  47, 
    122, 255,  50, 163,  26, 195, 
     97,  84,  99,  56, 140, 106, 
     12, 135,  81, 141, 225,  48, 
    170,  49,  28,  70,  53, 134, 
    195, 168, 198, 208,  72, 158, 
    185, 210, 242, 146, 155,  45, 
    105, 124, 111, 241, 249, 237, 
     21,  31, 188, 219, 130,  18, 
    109,  18, 169, 182,  16, 233, 
    246, 109, 186, 183,  70, 118, 
    243, 179,  68, 103, 150, 166, 
    245,  58,  60,  90,   1,  41, 
     45,  50,  77, 107,  75, 198, 
    189, 229, 245, 175, 253, 148, 
     72, 102, 223,  63, 238, 201, 
    138,  68, 202,  87, 153, 136, 
    251,  74, 221,  73,  75, 164, 
     83,  22, 123, 190, 215, 242, 
     46,  36,  15,  94,  36,  59, 
    147,  61, 126, 247,  72,  86, 
    216, 251, 124, 149, 182, 229, 
     43, 237, 165, 220,  41, 199, 
     30,  16, 251, 165, 175, 210, 
     54, 125, 165,  49, 174,  53, 
    158, 121, 215,  37,  36, 137, 
     49, 233,   9,  30, 199,  12, 
     73, 114, 204, 244,  36, 143, 
    205,  46,  62,  37,  23, 200, 
     19,   5, 233, 201, 130, 233, 
    109,  25, 205, 214, 153,  23, 
     31, 112,  60, 238, 212,  73, 
    121, 158, 207, 243, 124, 222, 
    244,  50, 230, 102, 139, 207, 
    173, 219, 207, 189, 116, 103, 
    237,  48,  20,   7, 238, 157, 
    136, 251,  55, 116, 224,  59, 
     83, 108, 107,  81, 252, 199, 
    248,  90,  10, 170, 112,  86, 
     29, 218,  83,  74,  79,  48, 
     19,  76, 193, 139,   3, 200, 
     99,  82, 140,  35, 209, 205, 
    222, 143, 205, 215, 111,  51, 
    253,  24,   3, 179, 234, 153, 
    171,  74, 123, 152, 193, 220, 
    220, 129,  33, 252, 134,  21, 
    117, 127,  83,  41, 122,   7, 
    244,  11, 150, 238, 128,  85, 
    159, 246,  76, 205,  63,  85, 
    138, 119,  65,  79, 188, 179, 
    142, 182, 154, 175,  48,  81, 
    233, 208, 121, 103, 196, 173, 
    215,  26, 206, 120, 185, 118, 
    171, 111, 112, 116, 184, 175, 
     88, 154, 175, 207, 185,  13, 
     39,  95,  93, 106,  56, 151, 
    170, 139, 110, 101, 105, 124, 
     52, 239,  52,  22,  43,  78, 
    113, 182,  52, 227,  46,  54, 
    156, 161, 218, 124, 189,  58, 
    231, 206, 248,  15,  21,  22, 
    220, 209, 218, 130, 123, 173, 
     84, 159, 186,  94,  28,  28, 
    186,  92, 188,  82, 157, 155, 
    175,  86, 166, 138,  35, 195, 
    185, 211, 245, 153,  50, 253, 
      0, 182, 134, 255, 190,   0, 
      0,   0,  88,  72,  83,  72, 
      8,   0,   0,   0,  93,  38, 
    234, 128, 195, 208,  16,  60, 
     88,  80,  68,  80,  98,   0, 
      0,   0,  67,  58,  92,  82, 
    101, 112, 111, 115,  92,  88, 
     98, 111, 120,  45,  65,  84, 
     71,  45,  83,  97, 109, 112, 
    108, 101, 115,  92,  75, 105, 
    116, 115,  92,  68, 105, 114, 
    101,  99, 116,  88,  84,  75, 
     92, 115, 114,  99,  92,  83, 
    104,  97, 100, 101, 114, 115, 
     92,  67, 111, 109, 112, 105, 
    108, 101, 100,  92,  88,  98, 
    111, 120,  79, 110, 101,  84, 
    111, 110, 101,  77,  97, 112, 
     95,  80,  83,  65,  67,  69, 
     83,  70, 105, 108, 109, 105, 
     99,  95,  83,  82,  71,  66, 
     46, 112, 100,  98
};

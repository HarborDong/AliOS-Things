/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: gpio2_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for gpio2 module.
void gpio2_iomux_config(void)
{
    // Config gpio2.GPIO2_IO00 to pad NAND_DATA00(A18)
    // SD3_CD_B
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00(0x020E0284)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA00
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA4
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO00
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA00_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00(0x020E066C)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA00_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO01 to pad NAND_DATA01(C17)
    // SD3_WP
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01(0x020E0288)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA01
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA5
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO01
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA01_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01(0x020E0670)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA01_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO02 to pad NAND_DATA02(F16)
    // SD2_CD_B
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02(0x020E028C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA02
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA6
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO02
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA02_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02(0x020E0674)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA02_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO03 to pad NAND_DATA03(D17)
    // SD2_WP
    // HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03(0x020E0290)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: gpmi signal: NAND_DATA03
    //     ALT1 (1) - Select instance: usdhc1 signal: SD1_DATA7
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO03
    HW_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_NAND_DATA03_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03(0x020E0678)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_NAND_DATA03_SRE_V(SLOW));

    // Config gpio2.GPIO2_IO18 to pad EIM_ADDR20(H22)
    // EPDC_PWRCTRL2
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR20_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR20(0x020E0120)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_ADDR20
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DISP1_DATA15
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_CSI1_DATA15
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO18
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG20
    //     ALT8 (8) - Select instance: epdc signal: EPDC_PWR_CTRL2
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR20_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR20_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR20_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20(0x020E04F0)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR20_SRE_V(FAST));

    // Config gpio2.GPIO2_IO19 to pad EIM_ADDR19(G25)
    // EPDC_PWRCTRL1
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR19_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR19(0x020E011C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_ADDR19
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DISP1_DATA14
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_CSI1_DATA14
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO19
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG19
    //     ALT8 (8) - Select instance: epdc signal: EPDC_PWR_CTRL1
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR19_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR19_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR19_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19(0x020E04EC)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR19_SRE_V(FAST));

    // Config gpio2.GPIO2_IO21 to pad EIM_ADDR17(G24)
    // E_PMIC_GOOD_B
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR17_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR17(0x020E0114)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_ADDR17
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DISP1_DATA12
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_CSI1_DATA12
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO21
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG17
    //     ALT8 (8) - Select instance: epdc signal: EPDC_PWR_STAT
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR17_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR17_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_ADDR17_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17(0x020E04E4)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_ADDR17_SRE_V(FAST));

    // Config gpio2.GPIO2_IO24 to pad EIM_CS1(J23)
    // DOK_B
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_CS1(0x020E0140)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_CS1
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DI1_PIN06
    //     ALT2 (2) - Select instance: ecspi2 signal: ECSPI2_MOSI
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO24
    //     ALT8 (8) - Select instance: epdc signal: EPDC_DATA08
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_CS1_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_CS1(0x020E0510)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_CS1_SRE_V(FAST));

    // Config gpio2.GPIO2_IO25 to pad EIM_OE(J24)
    // EPDC_PWRIRQ
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_OE_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_WR(0x0000B0B1);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_OE(0x020E01D8)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT0
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_OE
    //     ALT1 (1) - Select instance: ipu1 signal: IPU1_DI1_PIN07
    //     ALT2 (2) - Select instance: ecspi2 signal: ECSPI2_MISO
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO25
    //     ALT8 (8) - Select instance: epdc signal: EPDC_PWR_IRQ
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_OE_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_OE_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_OE_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_OE(0x020E05A8)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_OE_SRE_V(FAST));

    // Config gpio2.GPIO2_IO31 to pad EIM_EB3(F23)
    // SENSOR_PWR_EN
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_EB3_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_EB3(0x020E01D0)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_EB3
    //     ALT1 (1) - Select instance: ecspi4 signal: ECSPI4_RDY
    //     ALT2 (2) - Select instance: uart3 signal: UART3_RTS_B
    //     ALT3 (3) - Select instance: uart1 signal: UART1_RI_B
    //     ALT4 (4) - Select instance: ipu1 signal: IPU1_CSI1_HSYNC
    //     ALT5 (5) - Select instance: gpio2 signal: GPIO2_IO31
    //     ALT6 (6) - Select instance: ipu1 signal: IPU1_DI1_PIN03
    //     ALT7 (7) - Select instance: src signal: SRC_BOOT_CFG31
    //     ALT8 (8) - Select instance: epdc signal: EPDC_SDCE0
    //     ALT9 (9) - Select instance: eim signal: EIM_ACLK_FREERUN
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_EB3_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_EB3_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_EB3_MUX_MODE_V(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_EB3(0x020E05A0)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_EB3_SRE_V(SLOW));
}

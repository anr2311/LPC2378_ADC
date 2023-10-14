# LPC2378_ADC
This repo contains the basic configurations for ADC module of the LPC2378 based development kit (MCB2300) and displaying the A2D converted value through on-board LCD

Following are the configurations to be followed for setting the ADC module of the LPC 2378 (supported by appropriate snapshots from the LPC2378 TRM):
- Enable ADC using PCONP.PCAD register (bit 12)
- Enabling ADC in AD0CR.PDN register (bit 21)
- Enabling clock for ADC: PCLK_SEL0 bits [25:24]
- Select AD0.0 in PINSEL1 register (bit 14):
- Select channel 0 in AD0CR register bits [7:0]
- Select ClockDiv for ADC in AD0CR register [15:8]
- Start ADC conversion in AD0CR register bits [25:24]
- Wait for conversion result to be available - bit 31 of AD0GDR
- Process the available results - available in AD0GDR [15:6]

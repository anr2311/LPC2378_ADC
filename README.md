# LPC2378_ADC
This repo contains the basic configurations for ADC module of the LPC2378 based development kit (MCB2300) and displaying the A2D converted value through on-board LCD

Following are the configurations to be followed for setting the ADC module of the LPC 2378:
- Enable ADC using PCONP.PCAD register (bit 12)
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/4650382e-1dc6-42ed-b70d-a35d74378bb3)

- Enabling ADC in AD0CR.PDN register (bit 21)
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/670888e3-e4d3-4320-b358-951980a2d540)

- Enabling clock for ADC: PCLK_SEL0 bits [25:24]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/7107138b-0680-4e48-8db5-bedf37c6a027)

- Select AD0.0 in PINSEL1 register (bit 14)
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/64f0e61d-0f53-47a0-8678-6187660e135b)

- Select channel 0 in AD0CR register bits [7:0]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/60654bb0-a1b7-499f-aec8-46f0a484be3c)

- Select ClockDiv for ADC in AD0CR register bits [15:8]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/4930b4a5-ad37-42d5-ae25-8577fecb2247)

- Start ADC conversion in AD0CR register bits [25:24]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/dcf73a66-bb1b-465a-b124-47432533672d)

- Wait for conversion result to be available - bit 31 of AD0GDR
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/3ca9dcbd-2b64-4de0-a138-01fb00c25c85)

- Process the available results - available in AD0GDR bits [15:6]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/9d4a55ca-8c7b-43f3-b623-6dd77e814647)


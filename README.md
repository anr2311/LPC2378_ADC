# LPC2378_ADC
This repo contains the basic configurations for ADC module of the LPC2378 based development kit (MCB2300) and displaying the A2D converted value through on-board LCD

Following are the configurations to be followed for setting the ADC module of the LPC 2378 (available in the "Program.c" file of the repository):
- Enable ADC using PCONP.PCAD register (bit 12)
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/509e4db1-c1b0-49b2-a231-bc808238b2fb)


- Enabling ADC in AD0CR.PDN register (bit 21)
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/9d0a9909-e1ac-40f6-9948-85f51ac11559)


- Enabling clock for ADC: PCLK_SEL0 bits [25:24]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/5231f2cd-3e45-4bce-9e47-a91dbae7a47c)


- Select AD0.0 in PINSEL1 register (bit 14)
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/dc9091b1-1dbc-4c1e-ae8e-abb73cec6207)


- Select channel 0 in AD0CR register bits [7:0]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/09aa27ea-e742-4383-8f2b-3639f04719a8)


- Select ClockDiv for ADC in AD0CR register bits [15:8]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/1a5a796f-a5fd-41c2-b00a-961e943c1100)


- Start ADC conversion in AD0CR register bits [25:24]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/67c7d178-1ac5-4955-ae80-e20c865c6732)


- Wait for conversion result to be available - bit 31 of AD0GDR
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/133e2a95-a236-4651-bd4c-11d90075435f)


- Process the available results - available in AD0GDR bits [15:6]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/c3b3635e-7795-43ef-96eb-d7e24e05ea8e)



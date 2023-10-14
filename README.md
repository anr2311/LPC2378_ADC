# LPC2378_ADC
This repo contains the basic configurations for ADC module of the LPC2378 based development kit (MCB2300) and displaying the A2D converted value through on-board LCD

Following are the configurations to be followed for setting the ADC module of the LPC 2378 (supported by appropriate snapshots from the LPC2378 TRM):
- Enable ADC using PCONP.PCAD register (bit 12):
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/740760c1-78ea-4cd0-ad59-31b7d4ea876c)

- Enabling ADC in AD0CR.PDN register (bit 21):
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/6f6ea4b3-e4f0-4918-ab91-da05576ca02a)

- Enabling clock for ADC: PCLK_SEL0 bits [25:24]:
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/f25738c8-72c3-40fb-ba2b-2682367f88fb)

- Select AD0.0 in PINSEL1 register (bit 14):
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/be8aba19-6403-4b44-be15-37a2818f47cc)

- Select channel 0 in AD0CR register bits [7:0]:
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/01022e61-8bd0-47aa-ac7d-8ce1989ad764)

- Select ClockDiv for ADC in AD0CR register [15:8]:
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/3aceaaea-fb1d-450c-b6ef-eb05d76a9a63)

- Start ADC conversion in AD0CR register bits [25:24]:
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/bccfc200-bb6f-4804-acaa-f386d1ee4839)

- Wait for conversion result to be available - bit 31 of AD0GDR:
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/fc467650-76e4-4216-ae36-a4ebc7f0b146)

- Process the available results - available in AD0GDR [15:6]
![image](https://github.com/anr2311/LPC2378_ADC/assets/72514473/3bf06257-0ad2-41b8-bcef-dcd4ad8a7b17)


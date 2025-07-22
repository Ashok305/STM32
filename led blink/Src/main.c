
#include <stdint.h>
void delay()
{
	for(uint32_t i=0;i<300000;i++);
}


int main(void)
{
  uint32_t *AHB1ENR= (uint32_t*)0x40023830;
  uint32_t *MODER=(uint32_t*)0x40020000;
  uint32_t *ODR=(uint32_t*)0x40020014;
  *AHB1ENR |=(1<<0);
  *MODER |=(1<<10);
  while(1){
  *ODR |=(1<<5);a
  delay();
  *ODR &=~(1<<5);
  delay();
}
  return 0;
}

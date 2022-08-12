#include "intCtr.h"
int main(void){
	  intCtr_init();
	while(1){
		IntEnable(_INT0);
  	IntEnable(_INT8);
		IntEnable(_INT33);
		IntEnable(_INT68);
		IntEnable(_INT97);
		IntEnable(_INT134);
		IntDisable(_INT97);
	}
	return 0;
}
 
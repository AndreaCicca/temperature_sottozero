#include <iostream>

using namespace std;

int main ()
{
	float temp[4][365];
	int szero = 0;
	bool cento = false;
	int stop=0;
	float bassa = 100;
	int giornob=0;
	float media = 0;
	
	for (int i=0; i<365; i++){
	
	cout<<"Immettere le temperature del giorno "<<i<<" :"<<endl;	
		
		for (int j=0; j<4; j++){
			cin>>temp[j][i];
			
			if (temp[j][i]>=100){
			cento = true;
			stop=i;
			break;
			}
	}
	if (cento==true) break;
	}
	
	//if (cento==true) cout<<"100";
	
  	for (int i=0; i<stop; i++){
  		
		for (int j=0; j<4; j++){
  		if (temp[j][i]<0)
  		{
  			szero++;
  			break;
		  }
  		
  		}
  	
  	}
	
	cout<<"La temperatura e' scesa sottozero in "<<szero<<" giorni"<<endl;
	
  	for (int i=0; i<stop; i++){
  		
		for (int j=0; j<4; j++){
  		if (temp[j][i]<bassa)
  		{
  			bassa=temp[j][i];
  			giornob=i;
		  }
  		
  		}
  	
  	}	
	
	cout<<"La temperatura piu' bassa e' stata di "<<bassa<<"  gradi nel giorno "<<giornob<<endl;
	
  	for (int i=0; i<stop; i++){
  		
	media = media+temp[0][i];
  	
  	}	
	
	media=media/(stop);
	cout<<"La temperatura media iniziale e' stata di "<<media<<" gradi"<<endl;
	
	
	
	}

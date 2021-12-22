#if 1

#include <iostream>					/*cin�Bcout*/ 
#include <string>					/*string*/ 
#include <sstream>					/*stringstream*/
#include <vector>					/*vector*/
#include <algorithm>				/*count*/ 
 
using namespace std;				/*�ٲ���std*/ 

int main()
{
	
	vector<string> res;				/*�ŧi�@�Ӧr��e���A�ΨӦs��̲פ��Ϋ᪺���e*/ 
    string base_of_res;				/*�ŧi�@�Ӧr��A�Ψӿ�J��l���e*/ 
    string input_words;				/*�ŧi�@�Ӧr��A�ΨӼȦsŪ���쪺��l���e�A�ÿ�J��res��*/ 
    string find_the_word;			/*�ŧi�@�Ӧr��find_the_word�Ψӿ�J�n�䪺�r*/ 
    
	getline(cin, base_of_res);		/*Ū����J�����r��bbase_of_res*/ 
    stringstream input(base_of_res);/*��input�ŧi���@��stringstream�����i�H�Χ@��X�M��J,�A��base_of_res���r�Ŧ�Ū���iinput*/ 

    while(input>>input_words)	    /*��ڧ�input��J��input_words��(�o�O�֩w�y)*/ 
    {
       	res.push_back(input_words); /*��r��input_words��i�e�����̫�*/ 
	} 
        
	res.resize(20);					/*��e�����e�q�]�w�b�i��20�Ӥ������Ŷ��A�W�L�N�R��*/ 
	
    for(int i=0;i<res.size();i++)   /*�q�Ĥ@���}�l,�P�_���W�L�e�����e�q,�A�q�U�@���}�l*/
	{ 
        cout<<res[i]<<endl;			/*�L�X�e�������e*/ 
    }

    cin >> find_the_word;			/*��Jfind_the_word�����e�A�ΨӸ�res�r��e������ۦP��word*/ 

	int i =0 ;																/*�ŧi�@�Ӿ���ܼ�i�A�Q�Φbwhile�̭��N*/ 
																			 
	do{
		if(res[i]==find_the_word)											/*�p�Gres[i]==find_the_word*/
		{
			cout<<"The positions "<< i <<" of the  found ";					/*�L�Xres������mi*/ 
			cout<< res[i]<< " words in the original sentence." << endl;		/*�L�Xres��[i]�������e*/ 
		}
		i++;																/*i�q�s�}�l�Ai�A+1*/														 
	}while(i<=19);															/*����i<20����*/

    int c = count(res.begin(),res.end(),find_the_word);					    /*�ŧi�@��int c �O��res�q�Y������X�{find_the_word������*/ 
    cout << "The " << c ;												    /*�L�X int c(�o�O�p��w�bres���X�{������)*/
	cout << " of appearances of the new word in the original sentence. " << endl; 
     	
    return 0;
}
#endif


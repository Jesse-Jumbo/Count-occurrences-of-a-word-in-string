#if 1

#include <iostream>					/*cin、cout*/ 
#include <string>					/*string*/ 
#include <sstream>					/*stringstream*/
#include <vector>					/*vector*/
#include <algorithm>				/*count*/ 
 
using namespace std;				/*省略打std*/ 

int main()
{
	
	vector<string> res;				/*宣告一個字串容器，用來存放最終分割後的內容*/ 
    string base_of_res;				/*宣告一個字串，用來輸入原始內容*/ 
    string input_words;				/*宣告一個字串，用來暫存讀取到的原始內容，並輸入到res內*/ 
    string find_the_word;			/*宣告一個字串find_the_word用來輸入要找的字*/ 
    
	getline(cin, base_of_res);		/*讀取輸入的整行字串在base_of_res*/ 
    stringstream input(base_of_res);/*把input宣告成一個stringstream讓它可以用作輸出和輸入,再把base_of_res的字符串讀取進input*/ 

    while(input>>input_words)	    /*當我把input輸入到input_words中(這是肯定句)*/ 
    {
       	res.push_back(input_words); /*把字串input_words放進容器的最後*/ 
	} 
        
	res.resize(20);					/*把容器的容量設定在可放20個元素的空間，超過就刪除*/ 
	
    for(int i=0;i<res.size();i++)   /*從第一項開始,判斷不超過容器的容量,再從下一項開始*/
	{ 
        cout<<res[i]<<endl;			/*印出容器的內容*/ 
    }

    cin >> find_the_word;			/*輸入find_the_word的內容，用來跟res字串容器比較相同的word*/ 

	int i =0 ;																/*宣告一個整數變數i，被用在while裡迭代*/ 
																			 
	do{
		if(res[i]==find_the_word)											/*如果res[i]==find_the_word*/
		{
			cout<<"The positions "<< i <<" of the  found ";					/*印出res中的位置i*/ 
			cout<< res[i]<< " words in the original sentence." << endl;		/*印出res第[i]項的內容*/ 
		}
		i++;																/*i從零開始，i再+1*/														 
	}while(i<=19);															/*直到i<20為止*/

    int c = count(res.begin(),res.end(),find_the_word);					    /*宣告一個int c 是數res從頭到尾有出現find_the_word的次數*/ 
    cout << "The " << c ;												    /*印出 int c(這是計算w在res內出現的次數)*/
	cout << " of appearances of the new word in the original sentence. " << endl; 
     	
    return 0;
}
#endif


#include "io.h"

void IndexChar()
{

  char word[20];
  int number;
  
  cout << "원하는 단어를 입력해주세요.";
  cin >> word;

  cout << "출력을 원하는 자리 수를 입력해주세요.";
  cin >> number;

  cout << word[number-1];
  
}

void AlphaNumber()
{
  char Word[20];
  int WordSize = sizeof(Word)-1;
  
  cout << "원하는 단어를 입력해주세요.";
  cin >> Word;

  char Alpha[] = "abcdefghijklmnopqrstvuwxyz";
  int AlphaSize = sizeof(Alpha)-1;

  int *Check = new int[AlphaSize];
  //int Check[AlphaSize];

  for(int i=0;i<AlphaSize;i++)
  {
    Check[i] = -1;
  }
  
  for(int i=0; i<WordSize; i++)
  {
    for(int j=0; j<AlphaSize; j++)
    {
      if(Word[i] == Alpha[j]){
        if(Check[j] == -1){
          Check[j] = i;
        }
      }
    }
  }
  
  for(int i=0; i<AlphaSize; i++)
  {
    cout << Check[i] << " ";
  }
}

void MinMax() {
    int n;
    int m;
    cin >> n;
    //int *anumber = new int[n];
    vector<int> vnumber;
    for (int i = 0; i < n; i++) {
        //cin>>anumber[i];
        cin >> m;
        vnumber.push_back(m);
    }
    int max = *max_element(vnumber.begin(), vnumber.end());
    int min = *min_element(vnumber.begin(), vnumber.end());
    cout << max << min;
}


void InputBall() {
    int n;
    int m = 0;
    int i_str, j_fns, k;
    cin >> n >> m;
    int *Basket = new int[m];
    fill_n(Basket, m+1, 0);

    cout << endl << endl;

    for (int i = 0; i < m; i++) {//입력m번 받기
        cin >> i_str >> j_fns >> k;
        for (i_str; i_str <= j_fns; i_str++) {
            Basket[i_str-1] = k;
            for (int i = 0; i < n; i++) {
                cout << Basket[i] << " ";
            }
            cout << endl << endl;
        }
    }
    /*
    for (int i = 0; i < n; i++) {
        cout << Basket[i_str]<<" ";
    }*/
}
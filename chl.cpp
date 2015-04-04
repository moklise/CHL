//
//  chl.cpp
//  CH06
//
//  Created by 박민석 on 2015. 4. 4..
//  Copyright (c) 2015년 박민석. All rights reserved.
//


#include<iostream>
#include<string>

using namespace std;

struct STUDENT{
    char name[20];
    char address[100];
    char subject[3];
    int roll_number, score[3];
}s;

int get_average( int score);
int pass(int avg);

int main()
{
    int i, avg, passfail;
    struct STUDENT s;
    
    
    while(1)
    {
        
        cout << "학생의 이름, 학번, 주소를 입력해라 : \n"
        << "**그만하고 싶으면 quit 입력** \n\n";
        cin >> s.name >> s.roll_number >> s.address;
        
        if( !strcmp (s.name , "quit") )
            break;
        
        cout << s.name <<"  "<< s.roll_number << "  " << s.address;
        
        
        for (i=0; i<3; i++)
        {
            cout << i+1 <<"번째 과목의 과목명과 점수는? \n"<<endl;
            cin >> s.subject[i] >> s.score[i];
            
        }
        
        avg = get_average(s.score[i]);
        
        cout << "평균은 " << avg <<"입니다. \n";
        
        passfail = pass(avg);
        if (passfail == 1)
            cout << "패스입니다\n";
        
        else
            cout << "낙제입니다.\n";
    }
    return 0;
}

int get_average(int score )
{
    return (s.score[0]+ s.score[1] + s.score[2] ) /3;
}


int pass(int avg){
    if(avg>=50)
        return 1;
    else
        return 0;
}





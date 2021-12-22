#include<iostream>
#include<conio.h>
using namespace std;
int x=0;
using namespace std;
class QuizGame{
	public:
	void header(){
		cout<<"                                         "<<endl;
		cout<<"\n\n\t\t----------WELCOME TO QUIZ GAME----------"<<endl;
	cout<<" \n\n\t\tstep1: It contains 5 questions only"<<endl;
	cout<<" \t\tstep2: 10 marks for each right answer"<<endl;
	cout<<" \t\tstep3: There will be no negative marking"<<endl;
	}
	void footer(){
		cout<<"\t\t\t-----YOUR RESULT-----"<<endl;
	}
	void user(){
		string Respond;
		char ch1[50];
		cout<<"\n\t\t Please enter your name:";
		cin>> ch1;
		system("CLS");
		cout<<"\n\t\t\t Welcome"<<"!!!"<<ch1<<endl;
		cout<<"\n\t\t                "<<endl;
//		cout<<" \t\t Are you ready to play the game \n \t\t Yes/No"<<endl;
//		cin>>Respond;
//		if( Respond=="Yes" )
//		{
//			cout<<" Start the game"<<endl;
//		}
//		else
//		{
//			cout<<" Okay GoodBye!!!";
//			return 0;
//		}
	}
	void results()
	{
		if(x==50)
	cout<<" \t\n\n Congrations!!! You are the winner";
	if(x==40)
	cout<<" \t You are extremely intelligent Your Score is 40";
	if(x==30)
	cout<<" \t You are intelligent Your Score is 30";
	if(25==x||x==20||x==15)
	cout<<" \t You are average Your Score is "<<x<<"Better luck next time";
	else if(x<=10)
	cout<<" \t No use........ Not even 1 question right";		
	}
};
int main()
{
	char ch2, ch3, ch4,ch5,ch6;
	QuizGame obj1,obj2,obj3,obj4;
		obj2.header();
		obj1.user();
	string Respond;
		cout<<" \t\t Are you ready to play the game \n \t\t Yes/No"<<endl;
		cin>>Respond;
		if( Respond=="Yes" )
		{
			cout<<" Start the game"<<endl;
		}
		else
		{
			cout<<" Okay GoodBye!!!";
			return 0;
		}
			system("CLS");
		cout<<"Let's Play The Game"<<endl;
		getch();
			system("CLS");
			
		cout<<"\t  1. What is the capital city of Nepal? \n\t\t a. Lalitpur\t\ b.Bhaktapur \n \t\t   c.Kathmandu\t d.Pokhara"<<endl;
		cin>>ch2;
		if(ch2=='c' || ch2=='C')
		{
			x=x+10;
			cout<<"\tCongratulations!!!!! Your answer is correct. \n Your score is:"<<x<<endl;
		} else
		{
			cout<<"\tSorry!! Your answer is wrong. Please try again :-("<<endl;
			cout<<"\t Press Enter"<<endl;
		}
			getch();	
		  system("CLS");
		 
			cout<<"\t  2. What is the height of Mt.Everest? \n\t\t a.8848.86\t b.8849.86 \n \t\t   c.8848.76\t d.8848.68"<<endl;
			cin>>ch3;
				if(ch3=='a' || ch3=='A')
		{
			x=x+10;
			cout<<"\tCongratulations!!!!! Your answer is correct. \n Your score is:"<<x<<endl;
		} else
		{
			cout<<"\tSorry!! Your answer is wrong. Please try again :-("<<endl;
			cout<<"\t Press Enter"<<endl;
		}
		getch();
		  system("CLS");
	
			cout<<"\t  3. Which number is a pallindrome number?\n\t\t a. 23233\t b.23232 \n  \t\t  c.101010\t d.88484"<<endl;
			cin>>ch4;
			if(ch4=='b' || ch4=='B')
		{
			x=x+10;
			cout<<"\tCongratulations!!!!! Your answer is correct. \n Your score is:"<<x<<endl;
		} else
		{
			cout<<"\tSorry!! Your answer is wrong. Please try again :-("<<endl;
			cout<<"\t Press Enter"<<endl;
		}
		getch();
		  system("CLS");
	
			cout<<"\t  4. What is the #1 social media? \n\t\ta. Snapchat\t b.Instagram \n \t\t   c.Facebook\t d.Youtube"<<endl;
			cin>>ch5;
				if(ch5=='c' || ch5=='C')
		{
			x=x+10;
			cout<<"\tCongratulations!!!!! Your answer is correct. \n Your score is:"<<x<<endl;
		} else
		{
			cout<<"\tSorry!! Your answer is wrong. Please try again :-("<<endl;
			cout<<"\t Press Enter"<<endl;
		}
			getch();
		  system("CLS");

		  	cout<<"\t	5. What is the first email word? \n\t\t a. something like QWERTYUIOP\t b. hello world \n \t\t   c.something like QWRETUYIOP\t d.“something like QWERIOPTY"<<endl;
			cin>>ch6;
				if(ch6=='a' || ch6=='A')
		{
			x=x+10;
			cout<<"\tCongratulations!!!!! Your answer is correct. \n Your score is:"<<x<<endl;
		} else
		{
			cout<<"\tSorry!! Your answer is wrong. Please try again :-("<<endl;
			cout<<"\t Press Enter"<<endl;
		}
		getch();
		  system("CLS");
			obj3.footer();
	obj4.results();
	getch();
 	return 0;		
}

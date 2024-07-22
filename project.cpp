#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Calc
{
  public:
  int stud,abs;
  float percentile;
  vector<int>mark;
  Calc()
  {
    cout<<"*********WELCOME TO THE JEE PERCENTILE CALCULATOR**********"<<endl;
    cout<<"DISCLAIMER:"<<endl<<"THIS PROJECT IS A PERSONALISED OPEN SOURCE WHICH FOCUSES ON "<<endl<<"RECOMMENDING THE BEST COLLEGES FOR STUDENTS JEE ASPIRANTS"<<endl;
    cout<<"THE FURTHER UPCOMING INPUTS ARE ONLY MEANT FOR AGENCY CONDUCTING THE EXAM"<<endl;
    cout<<"_____PLEASE PROCEED FURTHER________"<<endl;
    cout<<"\nENTER THE TOTAL NUMBER OF STUDENTS REGISTERED:";//total number of students 
    cin>>stud;
    cout<<"\nNUMBER OF STUDENTS ABSENT:"<<endl;
    cin>>abs;
    cout<<"TOTAL NUMBER OF STUDENTS APPEARED FOR THE EXAM:"<<stud-abs<<endl;
  }
  void store()
  {
    
    for(int i=0;i<stud-abs;i++)
    {
      int k;  //Entering the marks scored by all students
      cout<<"\nENTER THE MARK:";
      cin>>k;
      mark.push_back(k);

    }
  }
    void cal()
    {
      int m,t=0,j;
      cout<<"\nENTER THE STUDENT'S MARK:";
      cin>>m;
      for(int j=0;j<mark.size();j++)
      {
        if(mark.at(j)<=m)
        {
          t++;               //calculating number of students below the given student 

        }
      }
        
      percentile=(t/float(stud-abs))*100.0;//calculating the percentile
      cout<<"THE PERCENTILE OF THE STUDENT:"<<percentile<<" PERCENTILE "<<endl;
      
      
      
      

    }

  
};
class college
{
  public:
  string str1;
  string str;
  int r;
  void display()
  {
    cout<<"****WELCOME TO THE COLLEGE PREDICTOR****"<<endl<<"DISCLAIMER";
    cout<<"THIS PAGE HELPS STUDENTS TO FIND THE BEST COLLEGES "<<endl<<"ACCORDING TO THEIR INTERESTS AND THEIR RANK";
    cout<<"WE ARE PROUD TO SAY THAT WE HAVE NO RESERVATIONS IN ALLOTING SEATS"<<endl;
    cout<<"WHICH PLACES US A STEP AHEAD THAN NTA"<<endl;
    cout<<"\nARE YOU INTERESTED IN KNOWING YOUR DREAM COLLEGE(yes/no):"<<endl;
    cin>>str;
  }
  void options()
  {
     if(str=="yes")
    {
      cout<<"ENTER YOUR RANK TO PREDICT:"<<endl;
      cin>>r;
      switch (r)
      {
        case 1:
        {
          cout<<"SUGGESTED COLLEGES FOR YOU BASED ON JEE SCORE"<<endl;
          cout<<"1.NIT TIRUCHIRAPALLI(code:675)"<<endl;
          cout<<"2.NIT ROURKELA(code:672)"<<endl;
          cout<<"3.NIT SURATHKAL(code:789)"<<endl;
          cout<<"4.NIT WARANGAL(code:897)"<<endl;
          cout<<"5.NIT CALICUT(code:904)"<<endl;
          cout<<"6.NIT NAGPUR(code:657)"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
        }
        case 2:
        {
          cout<<"SUGGESTED COLLEGES FOR YOU BASED ON JEE SCORE"<<endl;
          cout<<"2.NIT ROURKELA(code:672)"<<endl;
          cout<<"3.NIT SURATHKAL(code:789)"<<endl;
          cout<<"4.NIT WARANGAL(code:897)"<<endl;
          cout<<"5.NIT CALICUT(code:904)"<<endl;
          cout<<"6.NIT NAGPUR(code:657)"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
        }
        case 3:
        { cout<<"SUGGESTED COLLEGES FOR YOU BASED ON JEE SCORE"<<endl;
          cout<<"3.NIT SURATHKAL(code:789)"<<endl;
          cout<<"4.NIT WARANGAL(code:897)"<<endl;
          cout<<"5.NIT CALICUT(code:904)"<<endl;
          cout<<"6.NIT NAGPUR(code:657)"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
        }
        case 4:
        { cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE"<<endl;
          cout<<"4.NIT WARANGAL(code:897)"<<endl;
          cout<<"5.NIT CALICUT(code:904)"<<endl;
          cout<<"6.NIT NAGPUR(code:657)"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
           
        }
        case 5:
        { cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE "<<endl;
          cout<<"5.NIT CALICUT(code:904)"<<endl;
          cout<<"6.NIT NAGPUR(code:657)"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
          
        }
        case 6:
        { cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE"<<endl;
          cout<<"6.NIT NAGPUR(code:657)"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
           
        }
        case 7:
        { cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE"<<endl;
          cout<<"7.NIT KURUSHETRA(code:875)"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
          
        }
        case 8:
        { cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE"<<endl;
          cout<<"8.MNIT ALLAHABAD(code:990)"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;
          
        }
        case 9:
        {
          cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE"<<endl;
          cout<<"9.NIT JAIPUR(code:543)"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;

        }
        case 10:
        {
          cout<<"SUGGESTED COLLEGES BASED ON YOUR JEE SCORE"<<endl;
          cout<<"10.NIT DURGAPUR(code:234)"<<endl;
          cout<<"11.NIT SILCHAR(code:987)"<<endl;
          cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
          cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
          cout<<"14.NIT BHOPAL(code:123)"<<endl;
          cout<<"15.NIT RAIPUR(code:100)"<<endl;
          break;

          

        }
          

          

          

    
      
      }
      

    }
    else if(r>10&&r<20)
    {
      cout<<"WE ARE SORRY TO INFORM YOU THAT GETTING TOP NITS MAY SEEM CRITICAL FOR YOU"<<endl;
      cout<<"DO YOU NEED TO PROCEED FURTHER TO GET ANY NITS IN INDIA(yes/no):"<<endl;
      cin>>str1;
      if(str1=="yes")
      {
        cout<<"HERE ARE THE BEST NITS AS PER YOUR JEE SCORE"<<endl;
        cout<<"11.NIT SILCHAR(code:987)"<<endl;
        cout<<"12.NIT HAMIRPUR(code:870)"<<endl;
        cout<<"13.NI JAMSHEDPUR(code:342)"<<endl;
        cout<<"14.NIT BHOPAL(code:123)"<<endl;
        cout<<"15.NIT RAIPUR(code:100)"<<endl;
      }
      else{
        cout<<"WE WOULD BE GLAD TO GIVE A COUNSELLING"<<endl<<"TO CHOOSE YOUR BEST COLLEGE"<<endl;
        cout<<"CONTACT NUMBER HEADQUARTERS:90878 XXXXX"<<endl;
      }

    }
    else
    {
      cout<<"WE WOULD BE GLAD TO GIVE A CONSELLING"<<endl<<"TO CHOOSE YOUR BEST COLLEGE"<<endl;
      cout<<"CONTACT NUMBER HEADQUARTERS:90878 XXXXX"<<endl;
    }

    
  }
};
class about
{
  public:
  int code;
  void feature()
  { cout<<"THIS PAGE SHOWS YOU THE FEATURES,ACHIEVEMENTS AND FACILITIES IN COLLEGES"<<endl;
    cout<<"PLEASE ENTER THE COLLEGE CODE YOU GET FROM YOUR RANK TO KNOW THE RATINGS AND FEATURE:"<<endl;
    cin>>code;
    
    if(code==675)
    {
      cout<<"INSTITUTE NAME:NIT TIRUCHIRAPALLLI"<<endl;
      cout<<"INSTITUTE RATING:4.5/5"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:EXCELLENT"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:60LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:20-30LPA"<<endl;
      cout<<"National Institute of Technology Tiruchirappalli (NIT Trichy) is renowned for its excellence in technical education and research."<<endl;

    }
    else if(code==672)
    {
      cout<<"INSTITUTE NAME:NIT ROURKELA"<<endl;
      cout<<"INSTITUTE RATING:(4.1-4.3)/5"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:EXCELLENT"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:83.6LPA"<<endl;
      cout<<"INSTITUTE AVERAGE SALARY:14LPA"<<endl;
      cout<<"National Institute of Technology Rourkela (NIT Rourkela) is a premier technical institution known for its academic rigor and research contributions"<<endl;
    }
    else if(code==789)
    {
      cout<<"INSTITUTE NAME:NIT SURATHKAL"<<endl;
      cout<<"INSTITUTE RATING:(4.6-4.7)/5"<<endl;
      cout<<"INSTITUTE INFRATSRUCTURE :GOOD"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:54.75LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:18.26LPA"<<endl;
      cout<<"National Institute of Technology Karnataka, Surathkal (NITK Surathkal), is known for its picturesque campus and excellence in engineering education."<<endl;
    }
    else if(code==897)
    {
      cout<<"INSTITUTE NAME:NIT WARANGAL"<<endl;
      cout<<"INSTITUTE RATING:(4.4-4.5)/5"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:GOOD"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:40-50LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:10-15LPA"<<endl;
      cout<<"National Institute of Technology Warangal (NIT Warangal) is celebrated for its rich heritage, academic excellence, and vibrant campus life."<<endl;
    }
    else if(code==904)
    {
      cout<<"INSTITUTE NAME:NIT CALICUT"<<endl;
      cout<<"INSTITUE RATING:4/5"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:GOOD"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:30-40LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:12LPA"<<endl;
      cout<<"National Institute of Technology Calicut (NIT Calicut) is known for its picturesque campus and strong emphasis on technical education and research."<<endl;
    }
    else if(code==657)
    {
      cout<<"INSTITUTE NAME:NIT NAGPUR"<<endl;
      cout<<"INSTITUTE RATING:(3.5-4)/5"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:GOOD"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:20-30LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:7-10LPA"<<endl;
      cout<<"National Institute of Technology Nagpur (NIT Nagpur) is recognized for its academic excellence and commitment to producing skilled engineers."<<endl;
    }
    else if(code==875)
    {
      cout<<"INSTITUTE NAME:NIT KURUSHETRA"<<endl;
      cout<<"INSTITUTE RATING:(4/5)"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:EXCELLENT"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:25-35LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:8-12LPA"<<endl;
      cout<<"National Institute of Technology Kurukshetra (NIT Kurukshetra) is esteemed for its engineering education and research prowess in northern India."<<endl;
    }
    else if(code==990)
    {
      cout<<"INSTITUTE NAME:MNIT ALLAHABAD"<<endl;
      cout<<"INSTTUTE RATING:(around 4/5)"<<endl;
      cout<<"INSTITUTE INFRASTRUCTURE:GOOD"<<endl;
      cout<<"INSTITUTE HIGHEST PACKAGE:30-40LPA"<<endl;
      cout<<"INSTITUTE AVERAGE PACKAGE:8-12LPA"<<endl;
      cout<<"National Institute of Technology Allahabad (NIT Allahabad) is known for its strong emphasis on technical education and research in the state of Uttar Pradesh, India."<<endl;
    }
    else
    {
      cout<<" ";
    }

  }

};

class Rank:public Calc
{
  public:
  int rank;
  void display()
  {
    cout<<"****WELCOME TO THE JEE RANK CALCULATOR*****"<<endl;
    cout<<"THE REST COMING INPUTS ARE FOR STUDENT'S REFERENCE"<<endl;
    cout<<"____PLEASE PROCEED FURTHER TO KNOW YOUR RANK____"<<endl;
  }
  
  void pos()
  {
    rank=((100-percentile)/100)*(stud-abs)+1;
    cout<<"THE RANK OF THE STUDENT:"<<rank<<endl;
    cout<<"SEARCH FOR THE BEST COLLEGES YOU PREFER"<<endl;
    cout<<"CONGRATS!!!"<<endl;
  }
  

};



int main()
{
  Rank d;
  d.store();
  d.cal();
  d.display();
  d.pos();
  college t;
  t.display();
  t.options();
  about k;
  k.feature();
  

  return 0;
}
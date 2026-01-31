#include<iostream>
using namespace std;
int food(int calorie){
    if(calorie<=500){
        cout<<"Show burger"<<endl;
    }
    else if(calorie>=300&&calorie<500){
        cout<<"Pizza slice"<<endl;
    }
    else{
        cout<<"Samosa"<<endl;
    }
    return 0;
}
int heartrate(int heartbeat){
    int max_heartrate = 195;
    float  hr_percent = (heartbeat/max_heartrate)*100;
    if(hr_percent<50){
        cout<<"Below training zone"<<endl;
    }
    else if(hr_percent>50&&hr_percent<=70){
        cout<<"Fat burn zone"<<endl;
    }
    else if(hr_percent>70&&hr_percent<=85){
        cout<<"Cardio zone"<<endl;
    }
    else{
        cout<<"Peak zone"<<endl;
    }
    return 0;
}
int score_cal(int intensity,int duration,int heartbeat){
    int score;
    if(intensity=='L'){
         score = (duration/10) + (heartbeat/10)+1*5;
    }
    if(intensity=='M'){
         score = (duration/10) + (heartbeat/10)+2*5;
    }
    if(intensity=='H'){
         score = (duration/10) + (heartbeat/10)+3*5;
    }
    if(score>30){
        cout<<"intense workout"<<endl;
        cout<<score<<endl;
    }
    if(score>=20&&score<30){
        cout<<"good workour"<<endl;
        cout<<score<<endl;
    }
    if(score>=10&&score<20)
    {
        cout<<"modrate workout"<<endl;
        cout<<score<<endl;
    }
    if(score<10){
        cout<<"light workout"<<endl;
        cout<<score<<endl;
    }
   

    return 0;
}
int running(char intensity,int weight , int duration,int heartbeat){
int calorie;

if(intensity=='L'){
    calorie = (8 * weight * duration) / 60;
    cout<<calorie<<endl;
}
else if(intensity=='M'){
     calorie = (11 * weight *duration) / 60;
      cout<<calorie<<endl;
}
else{
     calorie = (14 * weight * duration) / 60;
     cout<<calorie<<endl;
}
food(calorie);
heartrate(heartbeat);
score_cal(intensity,duration,heartbeat);

return 0;
}
int cycling(char intensity,int weight , int duration,int heartbeat){
int calorie;

if(intensity=='L'){
    calorie = (6 * weight * duration) / 60;
      cout<<calorie<<endl;
}
else if(intensity=='M'){
     calorie = (9 * weight *duration) / 60;
      cout<<calorie<<endl;
}
else{
     calorie =(12 * weight * duration) / 60;
     cout<<calorie<<endl;
}
food(calorie);
heartrate(heartbeat);
score_cal(intensity,duration,heartbeat);
return 0;
}
int weight_lifting(char intensity,int weight , int duration,int heartbeat){
int calorie;

if(intensity=='L'){
    calorie= (3 * weight * duration) / 60;
      cout<<calorie<<endl;
}
else if(intensity=='M'){
     calorie = (6 * weight *duration) / 60;
      cout<<calorie<<endl;
}
else{
     calorie =(9 * weight * duration) / 60;
      cout<<calorie<<endl;
}food(calorie);
heartrate(heartbeat);
score_cal(intensity,duration,heartbeat);
return 0;
}
int swimming(char intensity,int weight , int duration,int heartbeat){
int calorie;

if(intensity=='L'){
    calorie = (7 * weight * duration) / 60;
      cout<<calorie<<endl;
}
else if(intensity=='M'){
     calorie = (10 * weight *duration) / 60;
     cout<<calorie<<endl;
}
else{
     calorie =(13 * weight * duration) / 60;
     cout<<calorie<<endl;
}
food(calorie);
heartrate( heartbeat);
score_cal(intensity,duration,heartbeat);
return 0;
}

int fitness(int duration,int heartrate){
    if(heartrate<120&&duration>30){
        cout<<"Good endurance"<<endl;
    }
    else if(heartrate>160&&duration>20)
    {
        cout<<"High intensity training"<<endl;
    }
    else if(heartrate>=120&&heartrate<=160&&duration>40)
    {
        cout<<"steady state cardio"<<endl;
    }
    else{
        cout<<"general fitness"<<endl;
    }


    return 0;
}
int main(){
    char exercise,intensity;
    int duration,weight,heartrate;
    cout<<"exercise type: ";
    cin>>exercise;
    cout<<"duration: ";
    cin>>duration;
    cout<<"weight: ";
    cin>>weight;
    cout<<"intensity: ";
    cin>>intensity;
    cout<<"heartbeat: ";
    cin>>heartrate;
    if(exercise=='R'){
    running(intensity,duration,weight,heartrate);
    }
    else if(exercise=='C'){
    cycling(intensity,duration,weight,heartrate);
    }
    else if(exercise=='W'){
    weight_lifting(intensity,duration,weight,heartrate);
    }
    else{
    swimming(intensity,duration,weight,heartrate);
    }
    fitness(duration,heartrate);
    


    return 0;

}
class Solution {
public:
    struct Info{
        int r;
        int c;
        int num;
    };
    struct Step{
        int r;
        int c;
        int Step;
        int num;
    };
    Info Locate(int Num,int Size){
        Info i;
        i.num=Num;
        int r_left=(Num-0.5)/Size;
        i.r=Size-r_left-1;
        int c=Num-r_left*Size;
        if(i.r%2!=Size%2){
            i.c=c-1;
        }
        else{
            i.c=Size-c;
        }
        return i;
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int Size=board.size();
        Info inf=Locate(1,Size);
        Step step;
        step.num=inf.num;
        step.r=inf.r;
        step.c=inf.c;
        step.Step=0;
        queue<Step> Q;
        Q.push(step);
        vector<vector<int> > Status;
        for(int i=0;i<Size;i++){
            vector<int> V;
            for(int j=0;j<Size;j++){
                V.push_back(0);
            }
            Status.push_back(V);
        }
        Status[step.r][step.c]=1;
        while(!Q.empty()){
            Step top_=Q.front();
            Q.pop();
           // cout<<"top: "<<top_.r<<' '<<top_.c<<' '<<top_.num<<' '<<top_.Step<<endl;
            if(top_.num==Size*Size){
                return top_.Step;
            }
            
            //if(board[top_.r][top_.c]==-1){
                int num=top_.num;
                for(int i0=1;i0<=6;i0++){
                    if(num+i0<=Size*Size){
                        Info i=Locate(num+i0,Size);
                        Step s;
                        s.num=i.num;
                        s.r=i.r;
                        s.c=i.c;
                        if(board[s.r][s.c]!=-1){
                            Info temp_i=Locate(board[s.r][s.c],Size);
                            s.num=temp_i.num;
                            s.r=temp_i.r;
                            s.c=temp_i.c;
                        }
                        s.Step=top_.Step+1;
                        if(Status[s.r][s.c]==0){
                            Q.push(s);
                            Status[s.r][s.c]=1;
                        }
                        
                    }
                }
          /* 
          }
            else{
                Info i=Locate(board[top_.r][top_.c],Size);
                Step s;
                s.num=i.num;
                s.r=i.r;
                s.c=i.c;
                s.Step=top_.Step+1;
                if(Status[s.r][s.c]==0){
                            Q.push(s);
                            Status[s.r][s.c]=1;
                }
            }
            */
        }
        
        return -1;
        
    }
};

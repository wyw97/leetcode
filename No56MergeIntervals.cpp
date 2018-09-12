/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 //按照开始时间贪心就好了
class Solution {
public:
    static bool MyCmp(const Interval& i1,const Interval& i2){
        return (i1.start<i2.start)||(i1.start==i2.start&&i1.end<i2.end);
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        
        
        vector<Interval> Ans;
        if(intervals.empty()) return Ans;
        sort(intervals.begin(),intervals.end(),MyCmp);
        vector<Interval>::iterator its=intervals.begin();
        int beg=its->start;
        int end=its->end;
        ++its;
        while(its!=intervals.end()){
            if(its->start>end){
                Interval temp=Interval(beg,end);
                Ans.push_back(temp);
                beg=its->start;
                end=its->end;
            }
            else{
                if(its->end>end)
                  end=its->end;
                
            }
            ++its;
        }
        Interval temp=Interval(beg,end);
        Ans.push_back(temp);
        return Ans;
    }
};

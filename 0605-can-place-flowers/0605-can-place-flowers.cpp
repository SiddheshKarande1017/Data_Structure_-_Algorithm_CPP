class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        //if(n==0) return true;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(n==0) break;
            if(flowerbed[i]==0)
            {
                if (flowerbed[max(i-1,0)]==0 && flowerbed[min(i+1,(int)flowerbed.size()-1)]==0){flowerbed[i]=1; n--;}
            }
            
        }
        return n==0;
            
    }
};
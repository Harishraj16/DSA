class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    vector<float> result;
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	        float mean = (float)sum/(i+1); //typecasting is important here! 
	        result.push_back(mean);
	    }
	    return result;
	}
};

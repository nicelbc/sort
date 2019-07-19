void bubble(vector<int> &arr){
	for(int i =0;i < arr.size();i++)
        {
            for(int j = 0;j < arr.size() - i - 1;j++)// j开始等于0，
            {
                if(arr[j] > arr[j + 1])
                {
                	swap(arr[j], arr[j + 1]);    
		}
            }
        }
}

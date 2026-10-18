func maxSlidingWindow(nums []int, k int) []int {
 
 maxArr:= []int{}
 n:= len(nums)
 currMax:= nums[0]
 for i:=0;i<n;i++ {
	if(i<k-1){
		currMax=max(currMax,nums[i])
	}else if(i==k-1){
		currMax=max(currMax,nums[i])
		maxArr=append(maxArr,currMax)
	}else {
		if nums[i-k]!=currMax {
			currMax= max(currMax,nums[i])
		}else {
			currMax=math.MinInt
			for j:=i-k+1; j<i+1;j++ {
				currMax=max(currMax,nums[j])
			}
			fmt.Println(nums[i],currMax)
		}
		maxArr=append(maxArr,currMax)
	}
 }   

 return maxArr  
}


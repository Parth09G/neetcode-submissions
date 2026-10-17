func areEqual(s1 []int, s2 []int) bool {
	for i,_ := range s1{
		if s1[i]!= s2[i] {
			return false
		}
	}
	return true
}
func checkInclusion(s1 string, s2 string) bool {
	// first ask if s1 and s2 only contains alphabates 
	//  if s2 is smaller than s2 then the ans will be always false
	n:= len(s1)
	m:= len(s2)
	ans:= false
	if n>m {
		return ans
	}

	freq1:=make([]int,26)

	for _,letter:= range s1{
		freq1[int(letter-'a')]++
	}

	for i:=0;i<m-n+1;i++{
		freq2 := make([]int,26)
		for j:=0; j<n; j++ {
			freq2[s2[i+j]-'a']++
		}
		if areEqual(freq1,freq2) {
			return true
		} 

	}
	return ans
}



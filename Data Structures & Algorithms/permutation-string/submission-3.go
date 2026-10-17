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
	
	freq2 := make([]int,26)
	i := 0
	j := 0

	for j< m {
		freq2[int(s2[j]-'a')]++
		j++
		fmt.Println(freq1,freq2,areEqual(freq1,freq2),j-i+1)
		if j-i == n && areEqual(freq1,freq2) {
			return true
		}else if j-i >= n {
			freq2[int(s2[i]-'a')]--
			i++
		}
		
	}

	return ans
}



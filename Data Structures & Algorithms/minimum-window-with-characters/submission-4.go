func minWindow(s string, t string) string {
	freq := make([]int,58)
	count := len(t)
	n:= len(s)
	m:= len(t)
	empty:=""
	if m > n {
		return empty 
	} 
	for _,letter:= range t {
		freq[int(letter-'A')]++
	}

	
	start:=0
	end:=n
	j:=0
	isSubstr:=false

	for i,letter:= range s{
		if freq[int(letter-'A')] > 0 {
			count--
		}

		freq[int(letter-'A')]--
		

		if count== 0 {
			isSubstr=true
			
			for j < n && freq[int(s[j]-'A')] < 0{
				freq[int(s[j]-'A')]++
				j++;
			}
	
			if i-j < end-start {
				start=j
				end=i
			}

			freq[int(s[j]-'A')]++
			count++
			j++
		}
	}
	if !isSubstr {
		return empty
	}
	return s[start:end+1]
    
}

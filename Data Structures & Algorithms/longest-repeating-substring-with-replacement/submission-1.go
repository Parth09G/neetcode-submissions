func characterReplacement(s string, k int) int {
	freq := make(map[rune]int)
	maxFreq := 0
	ans := 0
	start:=0

	for index,letter := range s{
		freq[letter]++
		maxFreq= max(maxFreq,freq[letter])

		for index-start+1 - maxFreq > k{
			freq[rune(s[start])]--
			start++
		}
		ans= max(ans,index-start+1)
	}

	return ans

}

func lengthOfLongestSubstring(s string) int {
	freq := map[rune]int{}
	start := 0
	ans := 0
	for index, letter := range s {
		freq[letter]++
		_, ok := freq[letter]
		if ok {
			for freq[letter]>1 {
				freq[rune(s[start])]--
				start++
			}
		}
		
		ans=max(ans,index-start+1)		
	
	}
	return ans
}


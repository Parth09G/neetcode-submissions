func isSubStr(freq map[rune]int, s string, i int, n int) bool {
	freq2 := map[rune]int{}
	for j := i; j < n; j++ {
		freq2[rune(s[j])]++
	}
	if len(freq) != len(freq2) {
		return false
	}
	for k, v := range freq {
		if freq2[k] != v {
			return false
		}
	}
	return true
}

func checkInclusion(s1 string, s2 string) bool {
	if len(s1) > len(s2) {
		return false
	}

	freq := map[rune]int{}
	window := len(s1)
	size := len(s2)

	for _, letter := range s1 {
		freq[letter]++
	}

	for i := 0; i+window <= size; i++ {
		if isSubStr(freq, s2, i, i+window) {
			return true
		}
	}
	return false
}

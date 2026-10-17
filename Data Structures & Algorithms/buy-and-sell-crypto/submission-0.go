func maxProfit(prices []int) int {
	purchase:= prices[0]
	profit:=0

	for i,_ := range prices{
		if prices[i]<purchase{
			purchase=prices[i];
		} 
		profit= max(profit,prices[i]-purchase)
	}
	return profit

}

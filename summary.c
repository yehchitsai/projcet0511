// 遞加練習 
int summary(int init,int endpoint)
{
	int summary;
	for(init=0,summary=0;init<endpoint;init++)
		summary=summary+init;
	return summary;
}

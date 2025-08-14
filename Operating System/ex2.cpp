/*
	Experiment No: 2

	Name of the lab work:
	A c program to simulate shortest job first (sjf) 
	(non-preemptive) cpu scheduling alogrithm.

	Objective:
	The objective of the program is to simulate the cpu 
	scheduling algorithm shortest job first (non-preemptive).

	Theory:
	process with shortest CPU brust time will execute first.

	process		brust time
	-------		----------
	  p1			6
	  p2			8
	  p3			7
	  p4			3

	average waiting time = (3 + 16 + 9 + 0) / 4 = 7

	average TT time = (9 + 24 + 16 + 3) / 4 = 13
*/

#include <stdio.h>

int main() {
	int p[20], bt[20], wt[20], tat[20], i, k, n, temp;
	float wtavg, tatavg;
	printf("\nEnter the number of processes: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		p[i] = i;
		printf("enter Burst Time for process p%d: ", i);
		scanf("%d", &bt[i]);
	}

	for(i = 0; i < n; i++) {
		for(k = i + 1; k < n; k++) {
			if(bt[i] > bt[k]) {
				temp = bt[i];
				bt[i] = bt[k];
				bt[k] = temp;
			}
		}
	}
 

	printf("Average Waiting Time: %f\n", wtavg);
	printf("Average Turnarround Time: %f\n", tatavg);


	return 0;
}
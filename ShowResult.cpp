#include <iostream>
#include<string>
using namespace std;
enum encheck {pass,fail};
int readResult() {
	int result;
	cout << "enter your result: ";
	cin >> result;
	return result;
}

encheck check(int n) {
	if (n >= 50)
		return encheck::pass;
	else
		return encheck::fail;

}

void printResult(int n) {
	if (check(n) == pass)
		cout << "pass";
	else
		cout << "fail";
}

int main() {
	printResult(readResult());
	cout << "I want to build a web app that generates a dynamic money counter and automatically produces video outputs for use inside YouTube videos.
The app should display a financial dashboard with four color-coded sections:
White — Total Money
Main number representing current total balance.
Automatically updates based on all entries.
Smooth counting animation from old value to new value.
Long-term goal: 1,000,000 EGP.
Green — Income Sources
Add multiple income entries.
Each entry: Source name + Amount earned.
Example: Freelance +30$.
Purple — Productive Expenses (Investments)
Add multiple investment entries.
Expenses that help grow income (equipment, learning, projects, etc.).
Red — Personal / Non-Productive Expenses
Add multiple entries.
Personal or unnecessary expenses.
Video Generation Requirement:
Every time numbers change (total, income, investment, or personal), the app should automatically generate a video clip showing:
Animated number changes
Updated colors and breakdowns
Smooth transitions for all changes
Output video should be ready for download immediately.
Include optional sound effects (like cash tick) when numbers increase.
Visual Design Requirements:
Black background
Large, bold, highly visible numbers
Clean, minimal layout suitable for recording or direct video export
Strong color contrast
Support EGP and USD display
Control Panel Features:
Edit total amount directly
Add new income entry
Add new investment expense
Add new personal expense
Delete any entry
Automatically recalculate totals
Option to show only total or full breakdown
Extra Features:
Smooth animation when adding new items
Works directly in browser with no login required
Responsive for desktop and mobile
Designed specifically for generating recorded visual counters for a YouTube series
Each video clip should reflect the exact change and be exportable in a standard video format (MP4)
Goal:
This tool will be used to visually document a real financial journey from zero to one million, automatically producing video content every time the numbers are updated."
}
 

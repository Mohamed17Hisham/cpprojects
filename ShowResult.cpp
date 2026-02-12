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
	cout << "Please modify the existing money counter animation with the following improvements:
Smooth Counting:
Make the number changes gradual and continuous instead of jumping abruptly.
Ensure that numbers count in smaller steps to create a smooth visual flow.
Higher FPS:
Increase the animation frame rate (FPS) to make the counting appear smoother.
The animation should look fluid even for large number changes (e.g., 0 → 114 → 200).
Animation Behavior:
Maintain all current features, colors, and functionality.
Only improve the smoothness and visual flow of the counting animation.
The goal is to have a visually smooth, high-frame-rate counter suitable for recording for YouTube videos.. and Add the following functionality related to editing entries:
I need the ability to edit existing entries after creating them.
Each income, investment, or personal expense item should have an Edit button.
Editing should allow me to change both the name and the amount of the entry.
When an entry is edited, the total should automatically recalculate and animate smoothly.
Do not require creating a new entry to modify a value — updates must happen directly on the existing item.
The edit interaction should be simple and fast (inline editing or popup editor).
Maintain all current animations and visual styles when values are updated."
}
 

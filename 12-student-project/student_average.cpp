#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <fstream>
#include <sstream>


struct Student {
    std::string name;
    int score;
};

double averageScore(const std::vector<Student>& students){
      int amount = 0;
      for (const Student& student : students){
         amount +=student.score;
      } 
	return static_cast<double>(amount) / students.size();

};


void sortByScore(std::vector<Student>& students){
      std::sort(students.begin(), students.end(),
          [](const Student& first, const Student& second) {
               if(first.score!=second.score){
	           return first.score > second.score;
      	       }
	       return first.name < second.name;
	  });
};

int main(){

    int number;
    if (!(std::cin >> number) || number < 0) {
        std::cerr << "輸入錯誤\n";
        return 1;
    }  
 
    std::vector<Student> students;
    for (int count =0; count < number; count++){
        std::string studentName;
	int score;
	if (!(std::cin >> studentName)) {
           std::cerr << "輸入錯誤\n";
           return 1;
        }
        if (!(std::cin >> score) || score < 0) {
           std::cerr << "輸入錯誤\n";
           return 1;
        }
	students.push_back({studentName,score});	
   
    }  


    std::ofstream report("report.txt");
    if (!report) {
        std::cerr << "無法寫入報告\n";
        return 1;
    } 

    std::ostringstream output;
 
    
    if (number == 0 ){
        output << "沒有學生" <<"\n";
    } else {
      
      output << averageScore(students) << "\n";

/*      auto top = std::max_element(students.begin(), students.end(),
          [](const Student& first, const Student& second) {
             return first.score < second.score;
      }); 
      output << top->name << "\n";
*/      
       sortByScore(students);
       output << students.front().name << "\n";
       for (auto && student : students){
         output << student.name << " " << student.score << "\n";
      }
    }  
     
    report << output.str();
      
    std::cout << output.str();


	
    return 0;



}

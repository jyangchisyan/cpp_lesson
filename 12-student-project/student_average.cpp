#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<iterator>
#include<map>
#include<set>


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


char gradeForScore(int score){
	switch(score/10){
	    case 10: case 9:
		return 'A';
            case 8:
		return 'B';
	    case 7:
		return 'C';
	    case 6:
		return 'D';
	    default:
		return 'F';
	}
	
};

double medianScore(const std::vector<Student>& students){
	
	if(students.size() % 2){
               return 	students.at(students.size()/2).score;
	}else{
		return static_cast<double>((students.at(students.size()/2).score) + students.at(students.size()/2 - 1).score)/2;
	}
};




int main(){

    int number;
    if (!(std::cin >> number) || number < 0) {
        std::cerr << "輸入錯誤\n";
        return 1;
    }  
 
    std::vector<Student> students;
    std::set<std::string> studentNames;
    for (int count =0; count < number; count++){
        std::string studentName;
	int score;
	if (!(std::cin >> studentName) || !(studentNames.insert(studentName).second)) {
           std::cerr << "輸入錯誤\n";
           return 1;
        }
        if (!(std::cin >> score) || score < 0 || score > 100) {
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
      
      output << std::fixed << std::setprecision(2);
      output << averageScore(students) << "\n";

       sortByScore(students);
       output << medianScore(students) << "\n";
	auto passed = std::count_if(students.begin(), students.end(),
            [](const Student& student) { return student.score >= 60; });
      double passRate = 100.0 * passed / students.size();
      output << "及格：" << passed  << " 人，及格率：" << passRate << "%\n";

      output << students.front().name << "\n";
      for (auto && student : students){
         output << student.name << " " << student.score << " " << gradeForScore(student.score);
	 output << "\n";
      }

      std::vector<Student> failed;
      std::copy_if(students.begin(), students.end(), std::back_inserter(failed),
      [](const Student& student) { return student.score < 60; });

      if(failed.empty()){
	output << "不及格名單：無" << "\n";
      }else{
	output << "不及格名單：";
	for (std::size_t index = 0; index < failed.size(); ++index){
	    if (index > 0) output << " ";
	    output << failed[index].name;
	}
	output << "\n";
	}

        std::map<char, int> gradeCounts;
	for (const Student& student : students) {
    		++gradeCounts[gradeForScore(student.score)];
	}
	output << "等第統計：";	
	for ( char grade : std::string("ABCDF")){
		if(grade != 'A'){
		   output << " "; 
   		}
		output << grade << "=" << gradeCounts[grade];
	}
        output << "\n";
    }  
     
    report << output.str();
      
    std::cout << output.str();


	
    return 0;



}

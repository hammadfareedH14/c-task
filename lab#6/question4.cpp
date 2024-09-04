#include <iostream>
using namespace std; 
int main() 
{
    // Input scores and years of experience
    int technicalSkills, interviewPerformance, experienceYears, additionalQualifications;

    cout << "Enter Technical Skills score (out of 100): ";
    cin >> technicalSkills;

    cout << "Enter Interview Performance score (out of 100): ";
    cin >> interviewPerformance;

    cout << "Enter years of experience (up to 5 years): ";
    cin >> experienceYears;

    cout << "Enter Additional Qualifications score (out of 100): ";
    cin >> additionalQualifications;
    
    // Calculate total score based on weights
    double totalScore = (technicalSkills * 0.4) + (interviewPerformance * 0.3) + (experienceYears * 10 * 0.2) + (additionalQualifications * 0.1);

    // Determine eligibility
    bool meetsTotalScoreThreshold = totalScore >= 70;
    bool meetsTechnicalSkillsThreshold = technicalSkills >= 65;
    bool meetsAdditionalQualificationsThreshold = additionalQualifications >= 5;

    // Output result
    if (meetsTotalScoreThreshold && meetsTechnicalSkillsThreshold && meetsAdditionalQualificationsThreshold) {
        cout << "Congratulations! The applicant is eligible for further consideration with a total score of " << totalScore << ".\n";
    } else {
        cout << "Sorry, the applicant does not meet the minimum criteria for further consideration.\n";
    }

    return 0;
}

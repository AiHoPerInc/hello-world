#include <iostream>
#include <cstring>

/**
 * @brief This class is an abstraction of company
 * 
 */
class Company
{
    private:
        char mCompName[101];
        char mCompLocation[101];
        int mNumOfStaffs;
        int mNumOfTeams;
    public:
        /**
         * @brief Constructor
         * 
         * @param: Not required
         * 
         * @return: No
         */    
        Company()
        {
            strcpy(mCompName, "NoName");
            strcpy(mCompLocation, "Vietnam");
            mNumOfStaffs = 0;
            mNumOfTeams = 0;
        }
        /**
         * @brief This function is used to set company name
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void SetCompName()
        {
            std::cin.getline(mCompName, 101);
            std::cin.clear();
        }

        /**
         * @brief This function is used to get company name
         * 
         * @param: Not required
         * 
         * @return: No
         */
        char* GetCompName()
        {
            return mCompName;
        }

        /**
         * @brief This function is used to set company location
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void SetCompLoc()
        {
            std::cin.getline(mCompLocation, 101);
            std::cin.clear();
        }

         /**
         * @brief This function is used to set company location
         * 
         * @param: Not required
         * 
         * @return: No
         */       
        char* GetCompLoc()
        {
            return mCompLocation;
        }

        int GetSizeOfComp();
        /**
         * @brief This function is used to set number of departments
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void SetNumOfTeams()
        {
            std::cin >> mNumOfTeams;
        }
        /**
         * @brief This function is used to get number of departments
         * 
         * @param: Not required
         * 
         * @return: int
         */
        int GetNumOfTeams()
        {
            return mNumOfTeams;
        }

        /**
         * @brief This function is used to set number of staffs
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void SetNumOfStaffs()
        {
            std::cin >> mNumOfStaffs;
        }
        /**
         * @brief This function is used to get number of staffs
         * 
         * @param: Not required
         * 
         * @return: int
         */
        int GetNumOfStaffs()
        {
            return mNumOfStaffs;
        }
};

/**
 * @brief This class is an abstraction of team
 * 
 */
class Team
{
    private:
        char mTeamName[101];
        int mNumOfTeamMems;
    public:
        /**
         * @brief Constructor
         * 
         * @param: Not required
         * 
         * @return: No
         */    
        Team()
        {
            strcpy(mTeamName, "NoTeamName");
            mNumOfTeamMems = 0;
        }

        /**
         * @brief This function is used to set team name
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void SetTeamName()
        {
            std::cin.getline(mTeamName, 101);
            std::cin.clear();
        }

        /**
         * @brief This function is used to get team name
         * 
         * @param: Not required
         * 
         * @return: No
         */
        char* GetTeamName()
        {
            return mTeamName;
        }

        /**
         * @brief This function is used to set number of team members
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void SetNumOfTeamMems()
        {
            std::cin >> mNumOfTeamMems;
        }

        /**
         * @brief This function is used to get number of team members
         * 
         * @param: Not required
         * 
         * @return: int
         */
        int GetNumOfTeamMems()
        {
            return mNumOfTeamMems;
        }

        /**
         * @brief This function is used to describe team tasks
         * 
         * @param: Not required
         * 
         * @return: No
         */
        virtual void TeamTasks()
        {
            std::cout << "Team tasks are ..." << std::endl;
        }

        /**
         * @brief This function is used to describe what is not team tasks
         * 
         * @param: Not required
         * 
         * @return: No
         */
        virtual void NotTeamTasks()
        {
            std::cout << "Team does not have to do ..." << std::endl;
        }
};

class EngineeringTeam: public Team
{
    public:
        /**
         * @brief This function is used to describe Engineering team tasks
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void TeamTasks()
        {
            std::cout << "Engineering team have to do tasks: meeting with customers and managers, requirement analysis, coding, fix bugs, ..." << std::endl;
        }

        /**
         * @brief This function is used to describe what is not engineering team tasks
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void NotTeamTasks()
        {
            std::cout << "Engineering team does not have to do:  accesory manegement, time sheet tracking, communicating with vendor, ..." << std::endl;
        }
};

class HRTeam: public Team
{
    public:
        /**
         * @brief This function is used to describe HR team tasks
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void TeamTasks()
        {
            std::cout << "HR team have to do tasks: accesory manegement, time sheet tracking, communicating with managers, ..." << std::endl;
        }

        /**
         * @brief This function is used to describe what is not HR team tasks
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void NotTeamTasks()
        {
            std::cout << "HR team does not have to do:  meeting with customer, requirement analysis, coding, fix bugs, ..." << std::endl;
        }

        /**
         * @brief This function is used to describe one task of HR team
         * 
         * @param: Not required
         * 
         * @return: No
         */
        void InformToStaffs()
        {
            std::cout << "Please be informed the status of company: ..." << std::endl;
        }
};

int main()
{
    /**
     * @brief Initilize data
     * 
     */
    Company MyComp = Company();
    Team CompTeam[10];
    HRTeam MyHrTeam = HRTeam();
    EngineeringTeam MyEngineeringTeam = EngineeringTeam();

    /**
     * @brief Out put default information of company
     * 
     */
    std::cout << "Default information of company is Name: " << MyComp.GetCompName();
    std::cout << " , location: " << MyComp.GetCompLoc();
    std::cout << " , number of teams: " << MyComp.GetNumOfTeams();
    std::cout << " , number of staffs: " << MyComp.GetNumOfStaffs() << std::endl;

    /**
     * @brief Input company information
     * 
     */
    std::cout << "What is your company name?" << std::endl;
    MyComp.SetCompName();
    std::cout << "How many teams it have?" << std::endl;
    MyComp.SetNumOfTeams();

    /**
     * @brief Out put company information
     * 
     */
    std::cout << "You have input your company name: " << MyComp.GetCompName();
    std::cout << " , number of teams: " << MyComp.GetNumOfTeams() << std::endl;

    /**
     * @brief Input team information
     * 
     */
    std::cout << "What are team names?"<< std::endl;
    std::cin.ignore();
    for (int i = 0; i < MyComp.GetNumOfTeams(); i++)
    {
        CompTeam[i].SetTeamName();
    }

    /**
     * @brief Output team inforation
     * 
     */
    std::cout << "You have input team names:"<< std::endl;
    for (int i = 0; i < MyComp.GetNumOfTeams(); i++)
    {
        std::cout << CompTeam[i].GetTeamName() << std::endl;
    }

    /**
     * @brief List out team tasks
     * 
     */
    CompTeam[0].TeamTasks();
    MyHrTeam.TeamTasks();
    MyEngineeringTeam.TeamTasks();

    /**
     * @brief Inform status
     * 
     */
    MyHrTeam.InformToStaffs();
}

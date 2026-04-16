#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Critter
{
    private:
    string m_Name;
    
    public:
    Critter(const string& name="");
    string GetName() const;
};

Critter::Critter(const string& name): m_Name(name) {}

inline string Critter::GetName() const
{
    return m_Name;
}

class Farm
{
    private:
    vector<Critter> m_Critters;
    
    public:
    Farm(int spaces=1);
    void Add(const Critter& aCritter);
    void RollCall() const;
};

Farm::Farm(int spaces) 
{
    m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
    m_Critters.push_back(aCritter);
}

void Farm::RollCall() const
{
    for (vector<Critter>::const_iterator iter = m_Critters.begin();
        iter != m_Critters.end();
        ++iter) 
    {
        cout << iter->GetName() << " here.\n";
    }
}

int main()
{
    Critter crit("Poochie");
    
    cout << "My Critter's name is " << crit.GetName() << endl;
    cout << "\nCreating critter farm...\n";
    
    Farm myFarm(3);
    
    cout << "\nAdding 3 critters to the farm...";
    
    myFarm.Add(Critter("Moe"));
    myFarm.Add(Critter("Larry"));
    myFarm.Add(Critter("Curly"));
    
    cout << "\nCalling roll...\n" << endl;
    
    myFarm.RollCall();
    
    return 0;
}

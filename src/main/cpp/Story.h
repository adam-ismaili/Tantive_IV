#ifndef STORY_H
#define STORY_H
class Story {
    public:
        // This is considred the constructor. A constructor initializes every variable.
        Story();
        // This is the deconstructor. The deconstructor de initializes everything... Meaning remove everything from memory.
        ~Story();
        void Play();
        void Set_Fish();
        void Set_Humans();
    private:
        int Get_Fish();
        int Get_Humans();

        int fish, humans;
};
#endif
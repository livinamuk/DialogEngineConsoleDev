#pragma once
#include "Header.h"

struct QuestDialogIDs
{
    int active = -1;
    int inactive = -1;
    int complete = -1;
    int failed = -1;
};

class NPC {
public:
    // Fields
    std::string m_name = "NONE";
  
    bool m_HasQuest = false;
    bool m_HasDialog = false;
    bool m_HasInWorldDialog = false;

    QuestDialogIDs m_questDialogIDs;
    int m_dialogID = -1;
    std::vector<int> m_inWorldDialogIDs;
};
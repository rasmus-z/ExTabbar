#pragma once

#include <deque>
#include <vector>
#include <memory>
#include "ShellWrapper.h"
#include "IDListData.h"
#include "NavigatedPoint.h"

class CShellTabItem 
{
public:
    CShellTabItem();
    virtual ~CShellTabItem() { Release(); }

    void Release();

    std::size_t GetHistoryBackCount() { return m_hisBackward.size(); }
    std::size_t GetHistoryForwardCount() { return m_hisForward.size(); }
    void GetHistoryBack(std::vector<TString>& historys);
    void GetHistoryForward(std::vector<TString>& historys);
    bool GoBackward(std::shared_ptr<CNavigatedPoint>& np);
    bool GoForward(std::shared_ptr<CNavigatedPoint>& np);
    bool NavigatedTo(const CIDListData& IdlData, const CIDLEx& cidl, int hash, bool autoNav);
    void SetCurrentStatus(const TString& focusPath, std::vector<CIDListData *>& items);
    const std::vector<CIDListData*>& GetCurrentStatus(TString& focusPath) const;
    void ClearCurrentStatus();

    //const CIDLEx& GetCidl() const { return m_CurNp->GetCIdl(); }
    //CIDLEx& GetCidl() { return m_CurNp->GetCIdl(); }
    std::tuple<const unsigned char*, int> GetCurrentIDLData() { return m_CurNp->GetCurrent().GetIDLData(); }
    const TString& GetCurrentPath() { return m_CurNp->GetCurrent().GetPath(); }
    const TString& GetTitle() { return m_CurNp->GetTitle(); }
    const TString& GetTooltip() { return m_CurNp->GetTooltip(); }
    CIDLEx GetCurrentCIdl() const;
protected:
    void ReleaseStatus();

protected:
    //TString m_strPath;
    //TString m_strTitle;
    //TString m_strTooltip;
    TString m_focusPath;
    std::vector<CIDListData*> m_SelectedItems;
    std::shared_ptr<CNavigatedPoint> m_CurNp;

    std::deque<std::shared_ptr<CNavigatedPoint>> m_hisBackward;
    std::deque<std::shared_ptr<CNavigatedPoint>> m_hisForward;
    std::vector<std::shared_ptr<CNavigatedPoint>> m_hisBranches;
};

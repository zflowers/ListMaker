//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Mar 23 17:46:55 2020 by ROOT version 6.12/07
// from TTree Events/Events
// found on file: MET_2016F.root
//////////////////////////////////////////////////////////

#ifndef MET_2016F_h
#define MET_2016F_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class MET_2016F {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
//   UInt_t          run;
//   UInt_t          luminosityBlock;
//   ULong64_t       event;
//   Float_t         CaloMET_phi;
//   Float_t         CaloMET_pt;
//   Float_t         CaloMET_sumEt;
//   Float_t         ChsMET_phi;
//   Float_t         ChsMET_pt;
//   Float_t         ChsMET_sumEt;
//   UInt_t          nCorrT1METJet;
//   Float_t         CorrT1METJet_area[32];   //[nCorrT1METJet]
//   Float_t         CorrT1METJet_eta[32];   //[nCorrT1METJet]
//   Float_t         CorrT1METJet_muonSubtrFactor[32];   //[nCorrT1METJet]
//   Float_t         CorrT1METJet_phi[32];   //[nCorrT1METJet]
//   Float_t         CorrT1METJet_rawPt[32];   //[nCorrT1METJet]
//   UInt_t          nElectron;
//   Float_t         Electron_deltaEtaSC[9];   //[nElectron]
//   Float_t         Electron_dr03EcalRecHitSumEt[9];   //[nElectron]
//   Float_t         Electron_dr03HcalDepth1TowerSumEt[9];   //[nElectron]
//   Float_t         Electron_dr03TkSumPt[9];   //[nElectron]
//   Float_t         Electron_dr03TkSumPtHEEP[9];   //[nElectron]
//   Float_t         Electron_dxy[9];   //[nElectron]
//   Float_t         Electron_dxyErr[9];   //[nElectron]
//   Float_t         Electron_dz[9];   //[nElectron]
//   Float_t         Electron_dzErr[9];   //[nElectron]
//   Float_t         Electron_eCorr[9];   //[nElectron]
//   Float_t         Electron_eInvMinusPInv[9];   //[nElectron]
//   Float_t         Electron_energyErr[9];   //[nElectron]
//   Float_t         Electron_eta[9];   //[nElectron]
//   Float_t         Electron_hoe[9];   //[nElectron]
//   Float_t         Electron_ip3d[9];   //[nElectron]
//   Float_t         Electron_jetPtRelv2[9];   //[nElectron]
//   Float_t         Electron_jetRelIso[9];   //[nElectron]
//   Float_t         Electron_mass[9];   //[nElectron]
//   Float_t         Electron_miniPFRelIso_all[9];   //[nElectron]
//   Float_t         Electron_miniPFRelIso_chg[9];   //[nElectron]
//   Float_t         Electron_mvaFall17V1Iso[9];   //[nElectron]
//   Float_t         Electron_mvaFall17V1noIso[9];   //[nElectron]
//   Float_t         Electron_mvaFall17V2Iso[9];   //[nElectron]
//   Float_t         Electron_mvaFall17V2noIso[9];   //[nElectron]
//   Float_t         Electron_mvaSpring16GP[9];   //[nElectron]
//   Float_t         Electron_mvaSpring16HZZ[9];   //[nElectron]
//   Float_t         Electron_pfRelIso03_all[9];   //[nElectron]
//   Float_t         Electron_pfRelIso03_chg[9];   //[nElectron]
//   Float_t         Electron_phi[9];   //[nElectron]
//   Float_t         Electron_pt[9];   //[nElectron]
//   Float_t         Electron_r9[9];   //[nElectron]
//   Float_t         Electron_sieie[9];   //[nElectron]
//   Float_t         Electron_sip3d[9];   //[nElectron]
//   Float_t         Electron_mvaTTH[9];   //[nElectron]
//   Int_t           Electron_charge[9];   //[nElectron]
//   Int_t           Electron_cutBased[9];   //[nElectron]
//   Int_t           Electron_cutBased_Fall17_V1[9];   //[nElectron]
//   Int_t           Electron_cutBased_HLTPreSel[9];   //[nElectron]
//   Int_t           Electron_cutBased_Spring15[9];   //[nElectron]
//   Int_t           Electron_cutBased_Sum16[9];   //[nElectron]
//   Int_t           Electron_jetIdx[9];   //[nElectron]
//   Int_t           Electron_pdgId[9];   //[nElectron]
//   Int_t           Electron_photonIdx[9];   //[nElectron]
//   Int_t           Electron_tightCharge[9];   //[nElectron]
//   Int_t           Electron_vidNestedWPBitmap[9];   //[nElectron]
//   Int_t           Electron_vidNestedWPBitmapHEEP[9];   //[nElectron]
//   Int_t           Electron_vidNestedWPBitmapSpring15[9];   //[nElectron]
//   Int_t           Electron_vidNestedWPBitmapSum16[9];   //[nElectron]
//   Bool_t          Electron_convVeto[9];   //[nElectron]
//   Bool_t          Electron_cutBased_HEEP[9];   //[nElectron]
//   Bool_t          Electron_isPFcand[9];   //[nElectron]
//   UChar_t         Electron_lostHits[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V1Iso_WP80[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V1Iso_WP90[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V1Iso_WPL[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V1noIso_WP80[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V1noIso_WP90[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V1noIso_WPL[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V2Iso_WP80[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V2Iso_WP90[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V2Iso_WPL[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V2noIso_WP80[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V2noIso_WP90[9];   //[nElectron]
//   Bool_t          Electron_mvaFall17V2noIso_WPL[9];   //[nElectron]
//   Bool_t          Electron_mvaSpring16GP_WP80[9];   //[nElectron]
//   Bool_t          Electron_mvaSpring16GP_WP90[9];   //[nElectron]
//   Bool_t          Electron_mvaSpring16HZZ_WPL[9];   //[nElectron]
//   UChar_t         Electron_seedGain[9];   //[nElectron]
//   UInt_t          nFatJet;
//   Float_t         FatJet_area[7];   //[nFatJet]
//   Float_t         FatJet_btagCMVA[7];   //[nFatJet]
//   Float_t         FatJet_btagCSVV2[7];   //[nFatJet]
//   Float_t         FatJet_btagDDBvL[7];   //[nFatJet]
//   Float_t         FatJet_btagDDBvL_noMD[7];   //[nFatJet]
//   Float_t         FatJet_btagDDCvB[7];   //[nFatJet]
//   Float_t         FatJet_btagDDCvB_noMD[7];   //[nFatJet]
//   Float_t         FatJet_btagDDCvL[7];   //[nFatJet]
//   Float_t         FatJet_btagDDCvL_noMD[7];   //[nFatJet]
//   Float_t         FatJet_btagDeepB[7];   //[nFatJet]
//   Float_t         FatJet_btagHbb[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_H4qvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_HbbvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_TvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_WvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_ZHbbvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_ZHccvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_ZbbvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_ZvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_bbvsLight[7];   //[nFatJet]
//   Float_t         FatJet_deepTagMD_ccvsLight[7];   //[nFatJet]
//   Float_t         FatJet_deepTag_H[7];   //[nFatJet]
//   Float_t         FatJet_deepTag_QCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTag_QCDothers[7];   //[nFatJet]
//   Float_t         FatJet_deepTag_TvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTag_WvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_deepTag_ZvsQCD[7];   //[nFatJet]
//   Float_t         FatJet_eta[7];   //[nFatJet]
//   Float_t         FatJet_mass[7];   //[nFatJet]
//   Float_t         FatJet_msoftdrop[7];   //[nFatJet]
//   Float_t         FatJet_n2b1[7];   //[nFatJet]
//   Float_t         FatJet_n3b1[7];   //[nFatJet]
//   Float_t         FatJet_phi[7];   //[nFatJet]
//   Float_t         FatJet_pt[7];   //[nFatJet]
//   Float_t         FatJet_rawFactor[7];   //[nFatJet]
//   Float_t         FatJet_tau1[7];   //[nFatJet]
//   Float_t         FatJet_tau2[7];   //[nFatJet]
//   Float_t         FatJet_tau3[7];   //[nFatJet]
//   Float_t         FatJet_tau4[7];   //[nFatJet]
//   Int_t           FatJet_jetId[7];   //[nFatJet]
//   Int_t           FatJet_subJetIdx1[7];   //[nFatJet]
//   Int_t           FatJet_subJetIdx2[7];   //[nFatJet]
//   UInt_t          nFsrPhoton;
//   Float_t         FsrPhoton_dROverEt2[3];   //[nFsrPhoton]
//   Float_t         FsrPhoton_eta[3];   //[nFsrPhoton]
//   Float_t         FsrPhoton_phi[3];   //[nFsrPhoton]
//   Float_t         FsrPhoton_pt[3];   //[nFsrPhoton]
//   Float_t         FsrPhoton_relIso03[3];   //[nFsrPhoton]
//   Int_t           FsrPhoton_muonIdx[3];   //[nFsrPhoton]
//   UInt_t          nIsoTrack;
//   Float_t         IsoTrack_dxy[6];   //[nIsoTrack]
//   Float_t         IsoTrack_dz[6];   //[nIsoTrack]
//   Float_t         IsoTrack_eta[6];   //[nIsoTrack]
//   Float_t         IsoTrack_pfRelIso03_all[6];   //[nIsoTrack]
//   Float_t         IsoTrack_pfRelIso03_chg[6];   //[nIsoTrack]
//   Float_t         IsoTrack_phi[6];   //[nIsoTrack]
//   Float_t         IsoTrack_pt[6];   //[nIsoTrack]
//   Float_t         IsoTrack_miniPFRelIso_all[6];   //[nIsoTrack]
//   Float_t         IsoTrack_miniPFRelIso_chg[6];   //[nIsoTrack]
//   Int_t           IsoTrack_fromPV[6];   //[nIsoTrack]
//   Int_t           IsoTrack_pdgId[6];   //[nIsoTrack]
//   Bool_t          IsoTrack_isHighPurityTrack[6];   //[nIsoTrack]
//   Bool_t          IsoTrack_isPFcand[6];   //[nIsoTrack]
//   Bool_t          IsoTrack_isFromLostTrack[6];   //[nIsoTrack]
//   UInt_t          nJet;
//   Float_t         Jet_area[59];   //[nJet]
//   Float_t         Jet_btagCMVA[59];   //[nJet]
//   Float_t         Jet_btagCSVV2[59];   //[nJet]
//   Float_t         Jet_btagDeepB[59];   //[nJet]
//   Float_t         Jet_btagDeepC[59];   //[nJet]
//   Float_t         Jet_btagDeepFlavB[59];   //[nJet]
//   Float_t         Jet_btagDeepFlavC[59];   //[nJet]
//   Float_t         Jet_chEmEF[59];   //[nJet]
//   Float_t         Jet_chHEF[59];   //[nJet]
//   Float_t         Jet_eta[59];   //[nJet]
//   Float_t         Jet_jercCHF[59];   //[nJet]
//   Float_t         Jet_jercCHPUF[59];   //[nJet]
//   Float_t         Jet_mass[59];   //[nJet]
//   Float_t         Jet_muEF[59];   //[nJet]
//   Float_t         Jet_muonSubtrFactor[59];   //[nJet]
//   Float_t         Jet_neEmEF[59];   //[nJet]
//   Float_t         Jet_neHEF[59];   //[nJet]
//   Float_t         Jet_phi[59];   //[nJet]
//   Float_t         Jet_pt[59];   //[nJet]
//   Float_t         Jet_qgl[59];   //[nJet]
//   Float_t         Jet_rawFactor[59];   //[nJet]
//   Float_t         Jet_bRegCorr[59];   //[nJet]
//   Float_t         Jet_bRegRes[59];   //[nJet]
//   Int_t           Jet_electronIdx1[59];   //[nJet]
//   Int_t           Jet_electronIdx2[59];   //[nJet]
//   Int_t           Jet_jetId[59];   //[nJet]
//   Int_t           Jet_muonIdx1[59];   //[nJet]
//   Int_t           Jet_muonIdx2[59];   //[nJet]
//   Int_t           Jet_nConstituents[59];   //[nJet]
//   Int_t           Jet_nElectrons[59];   //[nJet]
//   Int_t           Jet_nMuons[59];   //[nJet]
//   Int_t           Jet_puId[59];   //[nJet]
//   Float_t         L1PreFiringWeight_Dn;
//   Float_t         L1PreFiringWeight_Nom;
//   Float_t         L1PreFiringWeight_Up;
//   Float_t         MET_MetUnclustEnUpDeltaX;
//   Float_t         MET_MetUnclustEnUpDeltaY;
//   Float_t         MET_covXX;
//   Float_t         MET_covXY;
//   Float_t         MET_covYY;
//   Float_t         MET_phi;
//   Float_t         MET_pt;
//   Float_t         MET_significance;
//   Float_t         MET_sumEt;
//   UInt_t          nMuon;
//   Float_t         Muon_dxy[13];   //[nMuon]
//   Float_t         Muon_dxyErr[13];   //[nMuon]
//   Float_t         Muon_dz[13];   //[nMuon]
//   Float_t         Muon_dzErr[13];   //[nMuon]
//   Float_t         Muon_eta[13];   //[nMuon]
//   Float_t         Muon_ip3d[13];   //[nMuon]
//   Float_t         Muon_jetPtRelv2[13];   //[nMuon]
//   Float_t         Muon_jetRelIso[13];   //[nMuon]
//   Float_t         Muon_mass[13];   //[nMuon]
//   Float_t         Muon_miniPFRelIso_all[13];   //[nMuon]
//   Float_t         Muon_miniPFRelIso_chg[13];   //[nMuon]
//   Float_t         Muon_pfRelIso03_all[13];   //[nMuon]
//   Float_t         Muon_pfRelIso03_chg[13];   //[nMuon]
//   Float_t         Muon_pfRelIso04_all[13];   //[nMuon]
//   Float_t         Muon_phi[13];   //[nMuon]
//   Float_t         Muon_pt[13];   //[nMuon]
//   Float_t         Muon_ptErr[13];   //[nMuon]
//   Float_t         Muon_segmentComp[13];   //[nMuon]
//   Float_t         Muon_sip3d[13];   //[nMuon]
//   Float_t         Muon_tkRelIso[13];   //[nMuon]
//   Float_t         Muon_tunepRelPt[13];   //[nMuon]
//   Float_t         Muon_mvaLowPt[13];   //[nMuon]
//   Float_t         Muon_mvaTTH[13];   //[nMuon]
//   Int_t           Muon_charge[13];   //[nMuon]
//   Int_t           Muon_jetIdx[13];   //[nMuon]
//   Int_t           Muon_nStations[13];   //[nMuon]
//   Int_t           Muon_nTrackerLayers[13];   //[nMuon]
//   Int_t           Muon_pdgId[13];   //[nMuon]
//   Int_t           Muon_tightCharge[13];   //[nMuon]
//   Int_t           Muon_fsrPhotonIdx[13];   //[nMuon]
//   UChar_t         Muon_highPtId[13];   //[nMuon]
//   Bool_t          Muon_inTimeMuon[13];   //[nMuon]
//   Bool_t          Muon_isGlobal[13];   //[nMuon]
//   Bool_t          Muon_isPFcand[13];   //[nMuon]
//   Bool_t          Muon_isTracker[13];   //[nMuon]
//   Bool_t          Muon_looseId[13];   //[nMuon]
//   Bool_t          Muon_mediumId[13];   //[nMuon]
//   Bool_t          Muon_mediumPromptId[13];   //[nMuon]
//   UChar_t         Muon_miniIsoId[13];   //[nMuon]
//   UChar_t         Muon_multiIsoId[13];   //[nMuon]
//   UChar_t         Muon_mvaId[13];   //[nMuon]
//   UChar_t         Muon_pfIsoId[13];   //[nMuon]
//   Bool_t          Muon_softId[13];   //[nMuon]
//   Bool_t          Muon_softMvaId[13];   //[nMuon]
//   Bool_t          Muon_tightId[13];   //[nMuon]
//   UChar_t         Muon_tkIsoId[13];   //[nMuon]
//   Bool_t          Muon_triggerIdLoose[13];   //[nMuon]
//   UInt_t          nPhoton;
//   Float_t         Photon_eCorr[16];   //[nPhoton]
//   Float_t         Photon_energyErr[16];   //[nPhoton]
//   Float_t         Photon_eta[16];   //[nPhoton]
//   Float_t         Photon_hoe[16];   //[nPhoton]
//   Float_t         Photon_mass[16];   //[nPhoton]
//   Float_t         Photon_mvaID[16];   //[nPhoton]
//   Float_t         Photon_mvaID17[16];   //[nPhoton]
//   Float_t         Photon_pfRelIso03_all[16];   //[nPhoton]
//   Float_t         Photon_pfRelIso03_chg[16];   //[nPhoton]
//   Float_t         Photon_phi[16];   //[nPhoton]
//   Float_t         Photon_pt[16];   //[nPhoton]
//   Float_t         Photon_r9[16];   //[nPhoton]
//   Float_t         Photon_sieie[16];   //[nPhoton]
//   Int_t           Photon_charge[16];   //[nPhoton]
//   Int_t           Photon_cutBased[16];   //[nPhoton]
//   Int_t           Photon_cutBased17Bitmap[16];   //[nPhoton]
//   Int_t           Photon_electronIdx[16];   //[nPhoton]
//   Int_t           Photon_jetIdx[16];   //[nPhoton]
//   Int_t           Photon_pdgId[16];   //[nPhoton]
//   Int_t           Photon_vidNestedWPBitmap[16];   //[nPhoton]
//   Bool_t          Photon_electronVeto[16];   //[nPhoton]
//   Bool_t          Photon_isScEtaEB[16];   //[nPhoton]
//   Bool_t          Photon_isScEtaEE[16];   //[nPhoton]
//   Bool_t          Photon_mvaID17_WP80[16];   //[nPhoton]
//   Bool_t          Photon_mvaID17_WP90[16];   //[nPhoton]
//   Bool_t          Photon_mvaID_WP80[16];   //[nPhoton]
//   Bool_t          Photon_mvaID_WP90[16];   //[nPhoton]
//   Bool_t          Photon_pixelSeed[16];   //[nPhoton]
//   UChar_t         Photon_seedGain[16];   //[nPhoton]
//   Float_t         PuppiMET_phi;
//   Float_t         PuppiMET_pt;
//   Float_t         PuppiMET_sumEt;
//   Float_t         RawMET_phi;
//   Float_t         RawMET_pt;
//   Float_t         RawMET_sumEt;
//   Float_t         fixedGridRhoFastjetAll;
//   Float_t         fixedGridRhoFastjetCentral;
//   Float_t         fixedGridRhoFastjetCentralCalo;
//   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
//   Float_t         fixedGridRhoFastjetCentralNeutral;
//   UInt_t          nSoftActivityJet;
//   Float_t         SoftActivityJet_eta[6];   //[nSoftActivityJet]
//   Float_t         SoftActivityJet_phi[6];   //[nSoftActivityJet]
//   Float_t         SoftActivityJet_pt[6];   //[nSoftActivityJet]
//   Float_t         SoftActivityJetHT;
//   Float_t         SoftActivityJetHT10;
//   Float_t         SoftActivityJetHT2;
//   Float_t         SoftActivityJetHT5;
//   Int_t           SoftActivityJetNjets10;
//   Int_t           SoftActivityJetNjets2;
//   Int_t           SoftActivityJetNjets5;
//   UInt_t          nSubJet;
//   Float_t         SubJet_btagCMVA[12];   //[nSubJet]
//   Float_t         SubJet_btagCSVV2[12];   //[nSubJet]
//   Float_t         SubJet_btagDeepB[12];   //[nSubJet]
//   Float_t         SubJet_eta[12];   //[nSubJet]
//   Float_t         SubJet_mass[12];   //[nSubJet]
//   Float_t         SubJet_n2b1[12];   //[nSubJet]
//   Float_t         SubJet_n3b1[12];   //[nSubJet]
//   Float_t         SubJet_phi[12];   //[nSubJet]
//   Float_t         SubJet_pt[12];   //[nSubJet]
//   Float_t         SubJet_rawFactor[12];   //[nSubJet]
//   Float_t         SubJet_tau1[12];   //[nSubJet]
//   Float_t         SubJet_tau2[12];   //[nSubJet]
//   Float_t         SubJet_tau3[12];   //[nSubJet]
//   Float_t         SubJet_tau4[12];   //[nSubJet]
//   UInt_t          nTau;
//   Float_t         Tau_chargedIso[7];   //[nTau]
//   Float_t         Tau_dxy[7];   //[nTau]
//   Float_t         Tau_dz[7];   //[nTau]
//   Float_t         Tau_eta[7];   //[nTau]
//   Float_t         Tau_leadTkDeltaEta[7];   //[nTau]
//   Float_t         Tau_leadTkDeltaPhi[7];   //[nTau]
//   Float_t         Tau_leadTkPtOverTauPt[7];   //[nTau]
//   Float_t         Tau_mass[7];   //[nTau]
//   Float_t         Tau_neutralIso[7];   //[nTau]
//   Float_t         Tau_phi[7];   //[nTau]
//   Float_t         Tau_photonsOutsideSignalCone[7];   //[nTau]
//   Float_t         Tau_pt[7];   //[nTau]
//   Float_t         Tau_puCorr[7];   //[nTau]
//   Float_t         Tau_rawAntiEle[7];   //[nTau]
//   Float_t         Tau_rawAntiEle2018[7];   //[nTau]
//   Float_t         Tau_rawDeepTau2017v2p1VSe[7];   //[nTau]
//   Float_t         Tau_rawDeepTau2017v2p1VSjet[7];   //[nTau]
//   Float_t         Tau_rawDeepTau2017v2p1VSmu[7];   //[nTau]
//   Float_t         Tau_rawIso[7];   //[nTau]
//   Float_t         Tau_rawIsodR03[7];   //[nTau]
//   Float_t         Tau_rawMVAnewDM2017v2[7];   //[nTau]
//   Float_t         Tau_rawMVAoldDM[7];   //[nTau]
//   Float_t         Tau_rawMVAoldDM2017v1[7];   //[nTau]
//   Float_t         Tau_rawMVAoldDM2017v2[7];   //[nTau]
//   Float_t         Tau_rawMVAoldDMdR032017v2[7];   //[nTau]
//   Int_t           Tau_charge[7];   //[nTau]
//   Int_t           Tau_decayMode[7];   //[nTau]
//   Int_t           Tau_jetIdx[7];   //[nTau]
//   Int_t           Tau_rawAntiEleCat[7];   //[nTau]
//   Int_t           Tau_rawAntiEleCat2018[7];   //[nTau]
//   UChar_t         Tau_idAntiEle[7];   //[nTau]
//   UChar_t         Tau_idAntiEle2018[7];   //[nTau]
//   UChar_t         Tau_idAntiMu[7];   //[nTau]
//   Bool_t          Tau_idDecayMode[7];   //[nTau]
//   Bool_t          Tau_idDecayModeNewDMs[7];   //[nTau]
//   UChar_t         Tau_idDeepTau2017v2p1VSe[7];   //[nTau]
//   UChar_t         Tau_idDeepTau2017v2p1VSjet[7];   //[nTau]
//   UChar_t         Tau_idDeepTau2017v2p1VSmu[7];   //[nTau]
//   UChar_t         Tau_idMVAnewDM2017v2[7];   //[nTau]
//   UChar_t         Tau_idMVAoldDM[7];   //[nTau]
//   UChar_t         Tau_idMVAoldDM2017v1[7];   //[nTau]
//   UChar_t         Tau_idMVAoldDM2017v2[7];   //[nTau]
//   UChar_t         Tau_idMVAoldDMdR032017v2[7];   //[nTau]
//   Float_t         TkMET_phi;
//   Float_t         TkMET_pt;
//   Float_t         TkMET_sumEt;
//   UInt_t          nTrigObj;
//   Float_t         TrigObj_pt[47];   //[nTrigObj]
//   Float_t         TrigObj_eta[47];   //[nTrigObj]
//   Float_t         TrigObj_phi[47];   //[nTrigObj]
//   Float_t         TrigObj_l1pt[47];   //[nTrigObj]
//   Float_t         TrigObj_l1pt_2[47];   //[nTrigObj]
//   Float_t         TrigObj_l2pt[47];   //[nTrigObj]
//   Int_t           TrigObj_id[47];   //[nTrigObj]
//   Int_t           TrigObj_l1iso[47];   //[nTrigObj]
//   Int_t           TrigObj_l1charge[47];   //[nTrigObj]
//   Int_t           TrigObj_filterBits[47];   //[nTrigObj]
//   UInt_t          nOtherPV;
//   Float_t         OtherPV_z[3];   //[nOtherPV]
//   Float_t         PV_ndof;
//   Float_t         PV_x;
//   Float_t         PV_y;
//   Float_t         PV_z;
//   Float_t         PV_chi2;
//   Float_t         PV_score;
//   Int_t           PV_npvs;
//   Int_t           PV_npvsGood;
//   UInt_t          nSV;
//   Float_t         SV_dlen[15];   //[nSV]
//   Float_t         SV_dlenSig[15];   //[nSV]
//   Float_t         SV_dxy[15];   //[nSV]
//   Float_t         SV_dxySig[15];   //[nSV]
//   Float_t         SV_pAngle[15];   //[nSV]
//   UChar_t         Electron_cleanmask[9];   //[nElectron]
//   UChar_t         Jet_cleanmask[59];   //[nJet]
//   UChar_t         Muon_cleanmask[13];   //[nMuon]
//   UChar_t         Photon_cleanmask[16];   //[nPhoton]
//   UChar_t         Tau_cleanmask[7];   //[nTau]
//   Float_t         SV_chi2[15];   //[nSV]
//   Float_t         SV_eta[15];   //[nSV]
//   Float_t         SV_mass[15];   //[nSV]
//   Float_t         SV_ndof[15];   //[nSV]
//   Float_t         SV_phi[15];   //[nSV]
//   Float_t         SV_pt[15];   //[nSV]
//   Float_t         SV_x[15];   //[nSV]
//   Float_t         SV_y[15];   //[nSV]
//   Float_t         SV_z[15];   //[nSV]
//   Bool_t          Flag_HBHENoiseFilter;
//   Bool_t          Flag_HBHENoiseIsoFilter;
//   Bool_t          Flag_CSCTightHaloFilter;
//   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
//   Bool_t          Flag_CSCTightHalo2015Filter;
//   Bool_t          Flag_globalTightHalo2016Filter;
//   Bool_t          Flag_globalSuperTightHalo2016Filter;
//   Bool_t          Flag_HcalStripHaloFilter;
//   Bool_t          Flag_hcalLaserEventFilter;
//   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
//   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
//   Bool_t          Flag_ecalBadCalibFilter;
//   Bool_t          Flag_goodVertices;
//   Bool_t          Flag_eeBadScFilter;
//   Bool_t          Flag_ecalLaserCorrFilter;
//   Bool_t          Flag_trkPOGFilters;
//   Bool_t          Flag_chargedHadronTrackResolutionFilter;
//   Bool_t          Flag_muonBadTrackFilter;
//   Bool_t          Flag_BadChargedCandidateFilter;
//   Bool_t          Flag_BadPFMuonFilter;
//   Bool_t          Flag_BadChargedCandidateSummer16Filter;
//   Bool_t          Flag_BadPFMuonSummer16Filter;
//   Bool_t          Flag_trkPOG_manystripclus53X;
//   Bool_t          Flag_trkPOG_toomanystripclus53X;
//   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
//   Bool_t          Flag_METFilters;
//   Bool_t          HLTriggerFirstPath;
//   Bool_t          HLT_AK8PFJet360_TrimMass30;
//   Bool_t          HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;
//   Bool_t          HLT_AK8PFHT650_TrimR0p1PT0p03Mass50;
//   Bool_t          HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20;
//   Bool_t          HLT_CaloJet500_NoJetID;
//   Bool_t          HLT_Dimuon13_PsiPrime;
//   Bool_t          HLT_Dimuon13_Upsilon;
//   Bool_t          HLT_Dimuon20_Jpsi;
//   Bool_t          HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf;
//   Bool_t          HLT_DoubleEle33_CaloIdL;
//   Bool_t          HLT_DoubleEle33_CaloIdL_MW;
//   Bool_t          HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW;
//   Bool_t          HLT_DoubleEle33_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_DoubleEle37_Ele27_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg;
//   Bool_t          HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg;
//   Bool_t          HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg;
//   Bool_t          HLT_DoubleMu33NoFiltersNoVtx;
//   Bool_t          HLT_DoubleMu38NoFiltersNoVtx;
//   Bool_t          HLT_DoubleMu23NoFiltersNoVtxDisplaced;
//   Bool_t          HLT_DoubleMu28NoFiltersNoVtxDisplaced;
//   Bool_t          HLT_DoubleMu4_3_Bs;
//   Bool_t          HLT_DoubleMu4_3_Jpsi_Displaced;
//   Bool_t          HLT_DoubleMu4_JpsiTrk_Displaced;
//   Bool_t          HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;
//   Bool_t          HLT_DoubleMu3_Trk_Tau3mu;
//   Bool_t          HLT_DoubleMu4_PsiPrimeTrk_Displaced;
//   Bool_t          HLT_Mu7p5_L2Mu2_Jpsi;
//   Bool_t          HLT_Mu7p5_L2Mu2_Upsilon;
//   Bool_t          HLT_Mu7p5_Track2_Jpsi;
//   Bool_t          HLT_Mu7p5_Track3p5_Jpsi;
//   Bool_t          HLT_Mu7p5_Track7_Jpsi;
//   Bool_t          HLT_Mu7p5_Track2_Upsilon;
//   Bool_t          HLT_Mu7p5_Track3p5_Upsilon;
//   Bool_t          HLT_Mu7p5_Track7_Upsilon;
//   Bool_t          HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing;
//   Bool_t          HLT_Dimuon0er16_Jpsi_NoVertexing;
//   Bool_t          HLT_Dimuon6_Jpsi_NoVertexing;
//   Bool_t          HLT_DoublePhoton60;
//   Bool_t          HLT_DoublePhoton85;
//   Bool_t          HLT_Ele22_eta2p1_WPLoose_Gsf;
//   Bool_t          HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_Ele23_WPLoose_Gsf;
//   Bool_t          HLT_Ele23_WPLoose_Gsf_WHbbBoost;
//   Bool_t          HLT_Ele24_eta2p1_WPLoose_Gsf;
//   Bool_t          HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20;
//   Bool_t          HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30;
//   Bool_t          HLT_Ele25_WPTight_Gsf;
//   Bool_t          HLT_Ele25_eta2p1_WPLoose_Gsf;
//   Bool_t          HLT_Ele25_eta2p1_WPTight_Gsf;
//   Bool_t          HLT_Ele27_WPLoose_Gsf;
//   Bool_t          HLT_Ele27_WPLoose_Gsf_WHbbBoost;
//   Bool_t          HLT_Ele27_WPTight_Gsf;
//   Bool_t          HLT_Ele27_WPTight_Gsf_L1JetTauSeeded;
//   Bool_t          HLT_Ele27_eta2p1_WPLoose_Gsf;
//   Bool_t          HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg;
//   Bool_t          HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg;
//   Bool_t          HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg;
//   Bool_t          HLT_Ele27_eta2p1_WPTight_Gsf;
//   Bool_t          HLT_Ele32_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_Ele32_eta2p1_WPTight_Gsf;
//   Bool_t          HLT_Ele35_WPLoose_Gsf;
//   Bool_t          HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50;
//   Bool_t          HLT_Ele45_WPLoose_Gsf;
//   Bool_t          HLT_Ele45_WPLoose_Gsf_L1JetTauSeeded;
//   Bool_t          HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50;
//   Bool_t          HLT_Ele105_CaloIdVT_GsfTrkIdT;
//   Bool_t          HLT_Ele30WP60_SC4_Mass55;
//   Bool_t          HLT_Ele30WP60_Ele8_Mass55;
//   Bool_t          HLT_HT200;
//   Bool_t          HLT_HT275;
//   Bool_t          HLT_HT325;
//   Bool_t          HLT_HT425;
//   Bool_t          HLT_HT575;
//   Bool_t          HLT_HT410to430;
//   Bool_t          HLT_HT430to450;
//   Bool_t          HLT_HT450to470;
//   Bool_t          HLT_HT470to500;
//   Bool_t          HLT_HT500to550;
//   Bool_t          HLT_HT550to650;
//   Bool_t          HLT_HT650;
//   Bool_t          HLT_Mu16_eta2p1_MET30;
//   Bool_t          HLT_IsoMu16_eta2p1_MET30;
//   Bool_t          HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1;
//   Bool_t          HLT_IsoMu17_eta2p1_LooseIsoPFTau20;
//   Bool_t          HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_DoubleIsoMu17_eta2p1;
//   Bool_t          HLT_DoubleIsoMu17_eta2p1_noDzCut;
//   Bool_t          HLT_IsoMu18;
//   Bool_t          HLT_IsoMu19_eta2p1_LooseIsoPFTau20;
//   Bool_t          HLT_IsoMu19_eta2p1_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_IsoMu19_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg;
//   Bool_t          HLT_IsoMu20;
//   Bool_t          HLT_IsoMu21_eta2p1_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_IsoMu21_eta2p1_LooseIsoPFTau50_Trk30_eta2p1_SingleL1;
//   Bool_t          HLT_IsoMu21_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg;
//   Bool_t          HLT_IsoMu22;
//   Bool_t          HLT_IsoMu22_eta2p1;
//   Bool_t          HLT_IsoMu24;
//   Bool_t          HLT_IsoMu27;
//   Bool_t          HLT_IsoTkMu18;
//   Bool_t          HLT_IsoTkMu20;
//   Bool_t          HLT_IsoTkMu22;
//   Bool_t          HLT_IsoTkMu22_eta2p1;
//   Bool_t          HLT_IsoTkMu24;
//   Bool_t          HLT_IsoTkMu27;
//   Bool_t          HLT_JetE30_NoBPTX3BX;
//   Bool_t          HLT_JetE30_NoBPTX;
//   Bool_t          HLT_JetE50_NoBPTX3BX;
//   Bool_t          HLT_JetE70_NoBPTX3BX;
//   Bool_t          HLT_L1SingleMu18;
//   Bool_t          HLT_L2Mu10;
//   Bool_t          HLT_L1SingleMuOpen;
//   Bool_t          HLT_L1SingleMuOpen_DT;
//   Bool_t          HLT_L2DoubleMu23_NoVertex;
//   Bool_t          HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10;
//   Bool_t          HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10;
//   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX3BX;
//   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX;
//   Bool_t          HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX;
//   Bool_t          HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;
//   Bool_t          HLT_LooseIsoPFTau50_Trk30_eta2p1;
//   Bool_t          HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80;
//   Bool_t          HLT_LooseIsoPFTau50_Trk30_eta2p1_MET90;
//   Bool_t          HLT_LooseIsoPFTau50_Trk30_eta2p1_MET110;
//   Bool_t          HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120;
//   Bool_t          HLT_PFTau120_eta2p1;
//   Bool_t          HLT_VLooseIsoPFTau120_Trk50_eta2p1;
//   Bool_t          HLT_VLooseIsoPFTau140_Trk50_eta2p1;
//   Bool_t          HLT_Mu17_Mu8;
//   Bool_t          HLT_Mu17_Mu8_DZ;
//   Bool_t          HLT_Mu17_Mu8_SameSign;
//   Bool_t          HLT_Mu17_Mu8_SameSign_DZ;
//   Bool_t          HLT_Mu20_Mu10;
//   Bool_t          HLT_Mu20_Mu10_DZ;
//   Bool_t          HLT_Mu20_Mu10_SameSign;
//   Bool_t          HLT_Mu20_Mu10_SameSign_DZ;
//   Bool_t          HLT_Mu17_TkMu8_DZ;
//   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
//   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
//   Bool_t          HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL;
//   Bool_t          HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;
//   Bool_t          HLT_Mu25_TkMu0_dEta18_Onia;
//   Bool_t          HLT_Mu27_TkMu8;
//   Bool_t          HLT_Mu30_TkMu11;
//   Bool_t          HLT_Mu30_eta2p1_PFJet150_PFJet50;
//   Bool_t          HLT_Mu40_TkMu11;
//   Bool_t          HLT_Mu40_eta2p1_PFJet200_PFJet50;
//   Bool_t          HLT_Mu20;
//   Bool_t          HLT_TkMu20;
//   Bool_t          HLT_Mu24_eta2p1;
//   Bool_t          HLT_TkMu24_eta2p1;
//   Bool_t          HLT_Mu27;
//   Bool_t          HLT_TkMu27;
//   Bool_t          HLT_Mu45_eta2p1;
//   Bool_t          HLT_Mu50;
//   Bool_t          HLT_TkMu50;
//   Bool_t          HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL;
//   Bool_t          HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL;
//   Bool_t          HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL;
//   Bool_t          HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL;
//   Bool_t          HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL;
//   Bool_t          HLT_DoubleMu18NoFiltersNoVtx;
//   Bool_t          HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight;
//   Bool_t          HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose;
//   Bool_t          HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose;
//   Bool_t          HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight;
//   Bool_t          HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose;
//   Bool_t          HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose;
//   Bool_t          HLT_Mu28NoFiltersNoVtx_CentralCaloJet40;
   Bool_t          HLT_PFHT300_PFMET100;
   Bool_t          HLT_PFHT300_PFMET110;
//   Bool_t          HLT_PFHT550_4JetPt50;
//   Bool_t          HLT_PFHT650_4JetPt50;
//   Bool_t          HLT_PFHT750_4JetPt50;
//   Bool_t          HLT_PFJet15_NoCaloMatched;
//   Bool_t          HLT_PFJet25_NoCaloMatched;
//   Bool_t          HLT_DiPFJet15_NoCaloMatched;
//   Bool_t          HLT_DiPFJet25_NoCaloMatched;
//   Bool_t          HLT_DiPFJet15_FBEta3_NoCaloMatched;
//   Bool_t          HLT_DiPFJet25_FBEta3_NoCaloMatched;
//   Bool_t          HLT_DiPFJetAve15_HFJEC;
//   Bool_t          HLT_DiPFJetAve25_HFJEC;
//   Bool_t          HLT_DiPFJetAve35_HFJEC;
//   Bool_t          HLT_AK8PFJet40;
//   Bool_t          HLT_AK8PFJet60;
//   Bool_t          HLT_AK8PFJet80;
//   Bool_t          HLT_AK8PFJet140;
//   Bool_t          HLT_AK8PFJet200;
//   Bool_t          HLT_AK8PFJet260;
//   Bool_t          HLT_AK8PFJet320;
//   Bool_t          HLT_AK8PFJet400;
//   Bool_t          HLT_AK8PFJet450;
//   Bool_t          HLT_AK8PFJet500;
//   Bool_t          HLT_PFJet40;
//   Bool_t          HLT_PFJet60;
//   Bool_t          HLT_PFJet80;
//   Bool_t          HLT_PFJet140;
//   Bool_t          HLT_PFJet200;
//   Bool_t          HLT_PFJet260;
//   Bool_t          HLT_PFJet320;
//   Bool_t          HLT_PFJet400;
//   Bool_t          HLT_PFJet450;
//   Bool_t          HLT_PFJet500;
//   Bool_t          HLT_DiPFJetAve40;
//   Bool_t          HLT_DiPFJetAve60;
//   Bool_t          HLT_DiPFJetAve80;
//   Bool_t          HLT_DiPFJetAve140;
//   Bool_t          HLT_DiPFJetAve200;
//   Bool_t          HLT_DiPFJetAve260;
//   Bool_t          HLT_DiPFJetAve320;
//   Bool_t          HLT_DiPFJetAve400;
//   Bool_t          HLT_DiPFJetAve500;
//   Bool_t          HLT_DiPFJetAve60_HFJEC;
//   Bool_t          HLT_DiPFJetAve80_HFJEC;
//   Bool_t          HLT_DiPFJetAve100_HFJEC;
//   Bool_t          HLT_DiPFJetAve160_HFJEC;
//   Bool_t          HLT_DiPFJetAve220_HFJEC;
//   Bool_t          HLT_DiPFJetAve300_HFJEC;
//   Bool_t          HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140;
//   Bool_t          HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80;
//   Bool_t          HLT_DiCentralPFJet55_PFMET110;
//   Bool_t          HLT_DiCentralPFJet170;
//   Bool_t          HLT_SingleCentralPFJet170_CFMax0p1;
//   Bool_t          HLT_DiCentralPFJet170_CFMax0p1;
//   Bool_t          HLT_DiCentralPFJet220_CFMax0p3;
//   Bool_t          HLT_DiCentralPFJet330_CFMax0p5;
//   Bool_t          HLT_DiCentralPFJet430;
//   Bool_t          HLT_PFHT125;
//   Bool_t          HLT_PFHT200;
//   Bool_t          HLT_PFHT250;
//   Bool_t          HLT_PFHT300;
//   Bool_t          HLT_PFHT350;
//   Bool_t          HLT_PFHT400;
//   Bool_t          HLT_PFHT475;
//   Bool_t          HLT_PFHT600;
//   Bool_t          HLT_PFHT650;
//   Bool_t          HLT_PFHT800;
//   Bool_t          HLT_PFHT900;
//   Bool_t          HLT_PFHT200_PFAlphaT0p51;
//   Bool_t          HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57;
//   Bool_t          HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63;
//   Bool_t          HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55;
//   Bool_t          HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58;
//   Bool_t          HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53;
//   Bool_t          HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54;
//   Bool_t          HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52;
//   Bool_t          HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53;
//   Bool_t          HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51;
//   Bool_t          HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52;
   Bool_t          HLT_MET60_IsoTrk35_Loose;
   Bool_t          HLT_MET75_IsoTrk50;
   Bool_t          HLT_MET90_IsoTrk50;
   Bool_t          HLT_PFMET120_BTagCSV_p067;
   Bool_t          HLT_PFMET120_Mu5;
   Bool_t          HLT_PFMET170_NotCleaned;
   Bool_t          HLT_PFMET170_HBHECleaned;
   Bool_t          HLT_PFMET170_BeamHaloCleaned;
   Bool_t          HLT_PFMET170_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMET90_PFMHT90_IDTight;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight;
//   Bool_t          HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067;
//   Bool_t          HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight;
//   Bool_t          HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq200;
//   Bool_t          HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq460;
//   Bool_t          HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq240;
//   Bool_t          HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq500;
//   Bool_t          HLT_QuadPFJet_VBF;
//   Bool_t          HLT_L1_TripleJet_VBF;
//   Bool_t          HLT_QuadJet45_TripleBTagCSV_p087;
//   Bool_t          HLT_QuadJet45_DoubleBTagCSV_p087;
//   Bool_t          HLT_DoubleJet90_Double30_TripleBTagCSV_p087;
//   Bool_t          HLT_DoubleJet90_Double30_DoubleBTagCSV_p087;
//   Bool_t          HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160;
//   Bool_t          HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6;
//   Bool_t          HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172;
//   Bool_t          HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6;
//   Bool_t          HLT_DoubleJetsC100_SingleBTagCSV_p026;
//   Bool_t          HLT_DoubleJetsC100_SingleBTagCSV_p014;
//   Bool_t          HLT_DoubleJetsC100_SingleBTagCSV_p026_SinglePFJetC350;
//   Bool_t          HLT_DoubleJetsC100_SingleBTagCSV_p014_SinglePFJetC350;
//   Bool_t          HLT_Photon135_PFMET100;
//   Bool_t          HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40;
//   Bool_t          HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF;
//   Bool_t          HLT_Photon250_NoHE;
//   Bool_t          HLT_Photon300_NoHE;
//   Bool_t          HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60;
//   Bool_t          HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15;
//   Bool_t          HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40;
//   Bool_t          HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF;
//   Bool_t          HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40;
//   Bool_t          HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF;
//   Bool_t          HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40;
//   Bool_t          HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF;
//   Bool_t          HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40;
//   Bool_t          HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF;
//   Bool_t          HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40;
//   Bool_t          HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF;
//   Bool_t          HLT_Mu8_TrkIsoVVL;
//   Bool_t          HLT_Mu17_TrkIsoVVL;
//   Bool_t          HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
//   Bool_t          HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
//   Bool_t          HLT_Ele17_CaloIdL_TrackIdL_IsoVL_PFJet30;
//   Bool_t          HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
//   Bool_t          HLT_BTagMu_DiJet20_Mu5;
//   Bool_t          HLT_BTagMu_DiJet40_Mu5;
//   Bool_t          HLT_BTagMu_DiJet70_Mu5;
//   Bool_t          HLT_BTagMu_DiJet110_Mu5;
//   Bool_t          HLT_BTagMu_DiJet170_Mu5;
//   Bool_t          HLT_BTagMu_Jet300_Mu5;
//   Bool_t          HLT_BTagMu_AK8Jet300_Mu5;
//   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
//   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_L1JetTauSeeded;
//   Bool_t          HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
//   Bool_t          HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
//   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_Mu37_Ele27_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_Mu27_Ele37_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL;
//   Bool_t          HLT_Mu12_Photon25_CaloIdL;
//   Bool_t          HLT_Mu12_Photon25_CaloIdL_L1ISO;
//   Bool_t          HLT_Mu12_Photon25_CaloIdL_L1OR;
//   Bool_t          HLT_Mu17_Photon22_CaloIdL_L1ISO;
//   Bool_t          HLT_Mu17_Photon30_CaloIdL_L1ISO;
//   Bool_t          HLT_Mu17_Photon35_CaloIdL_L1ISO;
//   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL;
//   Bool_t          HLT_TripleMu_5_3_3;
//   Bool_t          HLT_TripleMu_12_10_5;
   Bool_t          HLT_Mu3er_PFHT140_PFMET125;
   Bool_t          HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067;
   Bool_t          HLT_Mu6_PFHT200_PFMET100;
   Bool_t          HLT_Mu14er_PFMET100;
//   Bool_t          HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Ele12_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Ele17_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_Ele17_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Ele23_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_AK8DiPFJet280_200_TrimMass30;
//   Bool_t          HLT_AK8DiPFJet250_200_TrimMass30;
//   Bool_t          HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20;
//   Bool_t          HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20;
//   Bool_t          HLT_PFHT650_WideJetMJJ900DEtaJJ1p5;
//   Bool_t          HLT_PFHT650_WideJetMJJ950DEtaJJ1p5;
//   Bool_t          HLT_Photon22;
//   Bool_t          HLT_Photon30;
//   Bool_t          HLT_Photon36;
//   Bool_t          HLT_Photon50;
//   Bool_t          HLT_Photon75;
//   Bool_t          HLT_Photon90;
//   Bool_t          HLT_Photon120;
//   Bool_t          HLT_Photon175;
//   Bool_t          HLT_Photon165_HE10;
//   Bool_t          HLT_Photon22_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon30_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon36_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon90_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon120_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Photon165_R9Id90_HE10_IsoM;
//   Bool_t          HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
//   Bool_t          HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70;
//   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55;
//   Bool_t          HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55;
//   Bool_t          HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55;
//   Bool_t          HLT_Dimuon0_Jpsi_Muon;
//   Bool_t          HLT_Dimuon0_Upsilon_Muon;
//   Bool_t          HLT_QuadMuon0_Dimuon0_Jpsi;
//   Bool_t          HLT_QuadMuon0_Dimuon0_Upsilon;
//   Bool_t          HLT_Rsq0p25;
//   Bool_t          HLT_Rsq0p30;
//   Bool_t          HLT_RsqMR240_Rsq0p09_MR200;
//   Bool_t          HLT_RsqMR240_Rsq0p09_MR200_4jet;
//   Bool_t          HLT_RsqMR270_Rsq0p09_MR200;
//   Bool_t          HLT_RsqMR270_Rsq0p09_MR200_4jet;
//   Bool_t          HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200;
//   Bool_t          HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200;
//   Bool_t          HLT_HT200_DisplacedDijet40_DisplacedTrack;
//   Bool_t          HLT_HT250_DisplacedDijet40_DisplacedTrack;
//   Bool_t          HLT_HT350_DisplacedDijet40_DisplacedTrack;
//   Bool_t          HLT_HT350_DisplacedDijet80_DisplacedTrack;
//   Bool_t          HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack;
//   Bool_t          HLT_HT350_DisplacedDijet40_Inclusive;
//   Bool_t          HLT_HT400_DisplacedDijet40_Inclusive;
//   Bool_t          HLT_HT500_DisplacedDijet40_Inclusive;
//   Bool_t          HLT_HT550_DisplacedDijet40_Inclusive;
//   Bool_t          HLT_HT550_DisplacedDijet80_Inclusive;
//   Bool_t          HLT_HT650_DisplacedDijet80_Inclusive;
//   Bool_t          HLT_HT750_DisplacedDijet80_Inclusive;
//   Bool_t          HLT_VBF_DisplacedJet40_DisplacedTrack;
//   Bool_t          HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5;
//   Bool_t          HLT_VBF_DisplacedJet40_TightID_DisplacedTrack;
//   Bool_t          HLT_VBF_DisplacedJet40_Hadronic;
//   Bool_t          HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack;
//   Bool_t          HLT_VBF_DisplacedJet40_TightID_Hadronic;
//   Bool_t          HLT_VBF_DisplacedJet40_VTightID_Hadronic;
//   Bool_t          HLT_VBF_DisplacedJet40_VVTightID_Hadronic;
//   Bool_t          HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack;
//   Bool_t          HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack;
   Bool_t          HLT_PFMETNoMu90_PFMHTNoMu90_IDTight;
   Bool_t          HLT_PFMETNoMu100_PFMHTNoMu100_IDTight;
   Bool_t          HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
//   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight;
//   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu100_PFMHTNoMu100_IDTight;
//   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
//   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
//   Bool_t          HLT_Ele27_eta2p1_WPLoose_Gsf_HT200;
//   Bool_t          HLT_Photon90_CaloIdL_PFHT500;
//   Bool_t          HLT_DoubleMu8_Mass8_PFHT250;
//   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250;
//   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250;
//   Bool_t          HLT_DoubleMu8_Mass8_PFHT300;
//   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300;
//   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300;
//   Bool_t          HLT_Mu10_CentralPFJet30_BTagCSV_p13;
   Bool_t          HLT_DoubleMu3_PFMET50;
//   Bool_t          HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13;
//   Bool_t          HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT350_PFMET50;
//   Bool_t          HLT_Ele15_IsoVVVL_PFHT600;
//   Bool_t          HLT_Ele15_IsoVVVL_PFHT350;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT400_PFMET50;
//   Bool_t          HLT_Ele15_IsoVVVL_PFHT400;
//   Bool_t          HLT_Ele50_IsoVVVL_PFHT400;
//   Bool_t          HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
//   Bool_t          HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
//   Bool_t          HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT350_PFMET50;
//   Bool_t          HLT_Mu15_IsoVVVL_PFHT600;
//   Bool_t          HLT_Mu15_IsoVVVL_PFHT350;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT400_PFMET50;
//   Bool_t          HLT_Mu15_IsoVVVL_PFHT400;
//   Bool_t          HLT_Mu50_IsoVVVL_PFHT400;
//   Bool_t          HLT_Dimuon16_Jpsi;
//   Bool_t          HLT_Dimuon10_Jpsi_Barrel;
//   Bool_t          HLT_Dimuon8_PsiPrime_Barrel;
//   Bool_t          HLT_Dimuon8_Upsilon_Barrel;
//   Bool_t          HLT_Dimuon0_Phi_Barrel;
//   Bool_t          HLT_Mu16_TkMu0_dEta18_Onia;
//   Bool_t          HLT_Mu16_TkMu0_dEta18_Phi;
//   Bool_t          HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx;
//   Bool_t          HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
//   Bool_t          HLT_Mu8;
//   Bool_t          HLT_Mu17;
//   Bool_t          HLT_Mu3_PFJet40;
//   Bool_t          HLT_Ele8_CaloIdM_TrackIdM_PFJet30;
//   Bool_t          HLT_Ele12_CaloIdM_TrackIdM_PFJet30;
//   Bool_t          HLT_Ele17_CaloIdM_TrackIdM_PFJet30;
//   Bool_t          HLT_Ele23_CaloIdM_TrackIdM_PFJet30;
//   Bool_t          HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet140;
//   Bool_t          HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
//   Bool_t          HLT_PFHT400_SixJet30_DoubleBTagCSV_p056;
//   Bool_t          HLT_PFHT450_SixJet40_BTagCSV_p056;
//   Bool_t          HLT_PFHT400_SixJet30;
//   Bool_t          HLT_PFHT450_SixJet40;
//   Bool_t          HLT_Ele115_CaloIdVT_GsfTrkIdT;
//   Bool_t          HLT_Mu55;
//   Bool_t          HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15;
//   Bool_t          HLT_Photon90_CaloIdL_PFHT600;
//   Bool_t          HLT_PixelTracks_Multiplicity60ForEndOfFill;
//   Bool_t          HLT_PixelTracks_Multiplicity85ForEndOfFill;
//   Bool_t          HLT_PixelTracks_Multiplicity110ForEndOfFill;
//   Bool_t          HLT_PixelTracks_Multiplicity135ForEndOfFill;
//   Bool_t          HLT_PixelTracks_Multiplicity160ForEndOfFill;
//   Bool_t          HLT_FullTracks_Multiplicity80;
//   Bool_t          HLT_FullTracks_Multiplicity100;
//   Bool_t          HLT_FullTracks_Multiplicity130;
//   Bool_t          HLT_FullTracks_Multiplicity150;
//   Bool_t          HLT_ECALHT800;
//   Bool_t          HLT_DiSC30_18_EIso_AND_HE_Mass70;
   Bool_t          HLT_MET200;
//   Bool_t          HLT_Ele27_HighEta_Ele20_Mass55;
//   Bool_t          HLT_L1FatEvents;
//   Bool_t          HLT_Physics;
//   Bool_t          HLT_Physics_part0;
//   Bool_t          HLT_Physics_part1;
//   Bool_t          HLT_L1FatEvents_part0;
//   Bool_t          HLT_L1FatEvents_part1;
//   Bool_t          HLT_L1FatEvents_part2;
//   Bool_t          HLT_L1FatEvents_part3;
//   Bool_t          HLT_Random;
//   Bool_t          HLT_ZeroBias;
//   Bool_t          HLT_ZeroBias_part0;
//   Bool_t          HLT_ZeroBias_part1;
//   Bool_t          HLT_ZeroBias_part2;
//   Bool_t          HLT_ZeroBias_part3;
//   Bool_t          HLT_ZeroBias_part4;
//   Bool_t          HLT_AK4CaloJet30;
//   Bool_t          HLT_AK4CaloJet40;
//   Bool_t          HLT_AK4CaloJet50;
//   Bool_t          HLT_AK4CaloJet80;
//   Bool_t          HLT_AK4CaloJet100;
//   Bool_t          HLT_AK4PFJet30;
//   Bool_t          HLT_AK4PFJet50;
//   Bool_t          HLT_AK4PFJet80;
//   Bool_t          HLT_AK4PFJet100;
//   Bool_t          HLT_HISinglePhoton10;
//   Bool_t          HLT_HISinglePhoton15;
//   Bool_t          HLT_HISinglePhoton20;
//   Bool_t          HLT_HISinglePhoton40;
//   Bool_t          HLT_HISinglePhoton60;
//   Bool_t          HLT_EcalCalibration;
//   Bool_t          HLT_HcalCalibration;
//   Bool_t          HLT_GlobalRunHPDNoise;
//   Bool_t          HLT_L1BptxMinus;
//   Bool_t          HLT_L1BptxPlus;
//   Bool_t          HLT_L1NotBptxOR;
//   Bool_t          HLT_L1BeamGasMinus;
//   Bool_t          HLT_L1BeamGasPlus;
//   Bool_t          HLT_L1BptxXOR;
//   Bool_t          HLT_L1MinimumBiasHF_OR;
//   Bool_t          HLT_L1MinimumBiasHF_AND;
//   Bool_t          HLT_HcalNZS;
//   Bool_t          HLT_HcalPhiSym;
//   Bool_t          HLT_ZeroBias_FirstCollisionAfterAbortGap;
//   Bool_t          HLT_ZeroBias_FirstCollisionAfterAbortGap_copy;
//   Bool_t          HLT_ZeroBias_FirstCollisionAfterAbortGap_TCDS;
//   Bool_t          HLT_ZeroBias_IsolatedBunches;
//   Bool_t          HLT_Photon500;
//   Bool_t          HLT_Photon600;
//   Bool_t          HLT_Mu300;
//   Bool_t          HLT_Mu350;
   Bool_t          HLT_MET250;
   Bool_t          HLT_MET300;
   Bool_t          HLT_MET600;
   Bool_t          HLT_MET700;
   Bool_t          HLT_PFMET300;
   Bool_t          HLT_PFMET400;
   Bool_t          HLT_PFMET500;
   Bool_t          HLT_PFMET600;
//   Bool_t          HLT_Ele250_CaloIdVT_GsfTrkIdT;
//   Bool_t          HLT_Ele300_CaloIdVT_GsfTrkIdT;
//   Bool_t          HLT_HT2000;
//   Bool_t          HLT_HT2500;
//   Bool_t          HLT_IsoTrackHE;
//   Bool_t          HLT_IsoTrackHB;
//   Bool_t          HLTriggerFinalPath;
//   Bool_t          HLT_HcalIsolatedbunch;
//   Bool_t          L1Reco_step;
//   Bool_t          Flag_HBHENoiseFilter;
//   Bool_t          Flag_HBHENoiseIsoFilter;
//   Bool_t          Flag_CSCTightHaloFilter;
//   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
//   Bool_t          Flag_CSCTightHalo2015Filter;
//   Bool_t          Flag_globalTightHalo2016Filter;
//   Bool_t          Flag_globalSuperTightHalo2016Filter;
//   Bool_t          Flag_HcalStripHaloFilter;
//   Bool_t          Flag_hcalLaserEventFilter;
//   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
//   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
//   Bool_t          Flag_goodVertices;
//   Bool_t          Flag_eeBadScFilter;
//   Bool_t          Flag_ecalLaserCorrFilter;
//   Bool_t          Flag_trkPOGFilters;
//   Bool_t          Flag_chargedHadronTrackResolutionFilter;
//   Bool_t          Flag_muonBadTrackFilter;
//   Bool_t          Flag_BadChargedCandidateFilter;
//   Bool_t          Flag_BadPFMuonFilter;
//   Bool_t          Flag_BadChargedCandidateSummer16Filter;
//   Bool_t          Flag_BadPFMuonSummer16Filter;
//   Bool_t          Flag_trkPOG_manystripclus53X;
//   Bool_t          Flag_trkPOG_toomanystripclus53X;
//   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
//   Bool_t          Flag_METFilters;
//   Bool_t          L1_AlwaysTrue;
//   Bool_t          L1_BPTX_LUT1_AND;
//   Bool_t          L1_BPTX_LUT1_B1;
//   Bool_t          L1_BPTX_LUT1_B2;
//   Bool_t          L1_BPTX_LUT1_OR;
//   Bool_t          L1_BPTX_LUT2_AND;
//   Bool_t          L1_BPTX_LUT2_B1NotB2;
//   Bool_t          L1_BPTX_LUT2_B2NotB1;
//   Bool_t          L1_BPTX_LUT2_NotOR;
//   Bool_t          L1_BPTX_TRIG2_AND;
//   Bool_t          L1_BPTX_TRIG2_B1NotB2;
//   Bool_t          L1_BPTX_TRIG2_B2NotB1;
//   Bool_t          L1_BPTX_TRIG2_NotOR;
//   Bool_t          L1_BRIL_TRIG0_AND;
//   Bool_t          L1_BRIL_TRIG0_FstBunchInTrain;
//   Bool_t          L1_BRIL_TRIG0_OR;
//   Bool_t          L1_BRIL_TRIG0_delayedAND;
//   Bool_t          L1_BRIL_TRIG3_AND;
//   Bool_t          L1_BRIL_TRIG3_delayedAND;
//   Bool_t          L1_BRIL_TRIG3_ref;
//   Bool_t          L1_BeamGasB1;
//   Bool_t          L1_BeamGasB2;
//   Bool_t          L1_BeamGasMinus;
//   Bool_t          L1_BeamGasPlus;
//   Bool_t          L1_BptxMinus;
//   Bool_t          L1_BptxOR;
//   Bool_t          L1_BptxPlus;
//   Bool_t          L1_BptxXOR;
//   Bool_t          L1_DoubleEG6_HTT255;
//   Bool_t          L1_DoubleEG_15_10;
//   Bool_t          L1_DoubleEG_18_17;
//   Bool_t          L1_DoubleEG_20_18;
//   Bool_t          L1_DoubleEG_22_10;
//   Bool_t          L1_DoubleEG_22_12;
//   Bool_t          L1_DoubleEG_22_15;
//   Bool_t          L1_DoubleEG_23_10;
//   Bool_t          L1_DoubleEG_24_17;
//   Bool_t          L1_DoubleIsoTau28er;
//   Bool_t          L1_DoubleIsoTau30er;
//   Bool_t          L1_DoubleIsoTau32er;
//   Bool_t          L1_DoubleIsoTau33er;
//   Bool_t          L1_DoubleIsoTau34er;
//   Bool_t          L1_DoubleIsoTau35er;
//   Bool_t          L1_DoubleJet12_ForwardBackward;
//   Bool_t          L1_DoubleJet16_ForwardBackward;
//   Bool_t          L1_DoubleJet8_ForwardBackward;
//   Bool_t          L1_DoubleJetC100;
//   Bool_t          L1_DoubleJetC112;
//   Bool_t          L1_DoubleJetC120;
//   Bool_t          L1_DoubleJetC40;
//   Bool_t          L1_DoubleJetC50;
//   Bool_t          L1_DoubleJetC60;
//   Bool_t          L1_DoubleJetC60_ETM60;
//   Bool_t          L1_DoubleJetC80;
//   Bool_t          L1_DoubleMu0;
//   Bool_t          L1_DoubleMu0_ETM40;
//   Bool_t          L1_DoubleMu0_ETM55;
//   Bool_t          L1_DoubleMu0er1p25_dEta_Max1p8_OS;
//   Bool_t          L1_DoubleMu0er1p6_dEta_Max1p8;
//   Bool_t          L1_DoubleMu0er1p6_dEta_Max1p8_OS;
//   Bool_t          L1_DoubleMu7_EG14;
//   Bool_t          L1_DoubleMu7_EG7;
//   Bool_t          L1_DoubleMuOpen;
//   Bool_t          L1_DoubleMu_10_0_dEta_Max1p8;
//   Bool_t          L1_DoubleMu_10_3p5;
//   Bool_t          L1_DoubleMu_10_Open;
//   Bool_t          L1_DoubleMu_11_4;
//   Bool_t          L1_DoubleMu_12_5;
//   Bool_t          L1_DoubleMu_12_8;
//   Bool_t          L1_DoubleMu_13_6;
//   Bool_t          L1_DoubleMu_15_5;
//   Bool_t          L1_DoubleTau50er;
//   Bool_t          L1_EG25er_HTT125;
//   Bool_t          L1_EG27er_HTT200;
//   Bool_t          L1_ETM100;
//   Bool_t          L1_ETM120;
//   Bool_t          L1_ETM30;
//   Bool_t          L1_ETM40;
//   Bool_t          L1_ETM50;
//   Bool_t          L1_ETM60;
//   Bool_t          L1_ETM60_Jet60_dPhi_Min0p4;
//   Bool_t          L1_ETM70;
//   Bool_t          L1_ETM70_Jet60_dPhi_Min0p4;
//   Bool_t          L1_ETM80;
//   Bool_t          L1_ETM90;
//   Bool_t          L1_ETT25;
//   Bool_t          L1_ETT25_BptxAND;
//   Bool_t          L1_ETT35_BptxAND;
//   Bool_t          L1_ETT50_BptxAND;
//   Bool_t          L1_ETT60_BptxAND;
//   Bool_t          L1_HTM100;
//   Bool_t          L1_HTM120;
//   Bool_t          L1_HTM130;
//   Bool_t          L1_HTM140;
//   Bool_t          L1_HTM150;
//   Bool_t          L1_HTM50;
//   Bool_t          L1_HTM60_HTT260;
//   Bool_t          L1_HTM70;
//   Bool_t          L1_HTM80;
//   Bool_t          L1_HTM80_HTT220;
//   Bool_t          L1_HTT120;
//   Bool_t          L1_HTT160;
//   Bool_t          L1_HTT200;
//   Bool_t          L1_HTT220;
//   Bool_t          L1_HTT240;
//   Bool_t          L1_HTT255;
//   Bool_t          L1_HTT270;
//   Bool_t          L1_HTT280;
//   Bool_t          L1_HTT300;
//   Bool_t          L1_HTT320;
//   Bool_t          L1_IsoEG18er_IsoTau24er_dEta_Min0p2;
//   Bool_t          L1_IsoEG20er_IsoTau25er_dEta_Min0p2;
//   Bool_t          L1_IsoEG22er_IsoTau26er_dEta_Min0p2;
//   Bool_t          L1_IsoEG22er_Tau20er_dEta_Min0p2;
//   Bool_t          L1_IsolatedBunch;
//   Bool_t          L1_Jet32_DoubleMu_10_0_dPhi_Jet_Mu0_Max0p4_dPhi_Mu_Mu_Min1p0;
//   Bool_t          L1_Jet32_Mu0_EG10_dPhi_Jet_Mu_Max0p4_dPhi_Mu_EG_Min1p0;
//   Bool_t          L1_MU20_EG15;
//   Bool_t          L1_MinimumBiasHF0_AND;
//   Bool_t          L1_MinimumBiasHF0_AND_BptxAND;
//   Bool_t          L1_MinimumBiasHF0_OR;
//   Bool_t          L1_MinimumBiasHF0_OR_BptxAND;
//   Bool_t          L1_MinimumBiasHF1_AND;
//   Bool_t          L1_MinimumBiasHF1_AND_BptxAND;
//   Bool_t          L1_MinimumBiasHF1_OR;
//   Bool_t          L1_MinimumBiasHF1_OR_BptxAND;
//   Bool_t          L1_Mu0er_ETM40;
//   Bool_t          L1_Mu0er_ETM55;
//   Bool_t          L1_Mu10er_ETM30;
//   Bool_t          L1_Mu10er_ETM50;
//   Bool_t          L1_Mu12_EG10;
//   Bool_t          L1_Mu14er_ETM30;
//   Bool_t          L1_Mu16er_Tau20er;
//   Bool_t          L1_Mu16er_Tau24er;
//   Bool_t          L1_Mu18er_IsoTau26er;
//   Bool_t          L1_Mu18er_Tau20er;
//   Bool_t          L1_Mu18er_Tau24er;
//   Bool_t          L1_Mu20_EG10;
//   Bool_t          L1_Mu20_EG17;
//   Bool_t          L1_Mu20er_IsoTau26er;
//   Bool_t          L1_Mu23_EG10;
//   Bool_t          L1_Mu23_IsoEG10;
//   Bool_t          L1_Mu3_JetC120;
//   Bool_t          L1_Mu3_JetC120_dEta_Max0p4_dPhi_Max0p4;
//   Bool_t          L1_Mu3_JetC16;
//   Bool_t          L1_Mu3_JetC16_dEta_Max0p4_dPhi_Max0p4;
//   Bool_t          L1_Mu3_JetC60;
//   Bool_t          L1_Mu3_JetC60_dEta_Max0p4_dPhi_Max0p4;
//   Bool_t          L1_Mu5_EG15;
//   Bool_t          L1_Mu5_EG20;
//   Bool_t          L1_Mu5_EG23;
//   Bool_t          L1_Mu5_IsoEG18;
//   Bool_t          L1_Mu5_IsoEG20;
//   Bool_t          L1_Mu6_DoubleEG10;
//   Bool_t          L1_Mu6_DoubleEG17;
//   Bool_t          L1_Mu6_HTT200;
//   Bool_t          L1_Mu8_HTT150;
//   Bool_t          L1_NotBptxOR;
//   Bool_t          L1_QuadJetC36_Tau52;
//   Bool_t          L1_QuadJetC40;
//   Bool_t          L1_QuadJetC50;
//   Bool_t          L1_QuadJetC60;
//   Bool_t          L1_QuadMu0;
//   Bool_t          L1_SingleEG10;
//   Bool_t          L1_SingleEG15;
//   Bool_t          L1_SingleEG18;
//   Bool_t          L1_SingleEG24;
//   Bool_t          L1_SingleEG26;
//   Bool_t          L1_SingleEG28;
//   Bool_t          L1_SingleEG2_BptxAND;
//   Bool_t          L1_SingleEG30;
//   Bool_t          L1_SingleEG32;
//   Bool_t          L1_SingleEG34;
//   Bool_t          L1_SingleEG36;
//   Bool_t          L1_SingleEG38;
//   Bool_t          L1_SingleEG40;
//   Bool_t          L1_SingleEG45;
//   Bool_t          L1_SingleEG5;
//   Bool_t          L1_SingleIsoEG18;
//   Bool_t          L1_SingleIsoEG18er;
//   Bool_t          L1_SingleIsoEG20;
//   Bool_t          L1_SingleIsoEG20er;
//   Bool_t          L1_SingleIsoEG22;
//   Bool_t          L1_SingleIsoEG22er;
//   Bool_t          L1_SingleIsoEG24;
//   Bool_t          L1_SingleIsoEG24er;
//   Bool_t          L1_SingleIsoEG26;
//   Bool_t          L1_SingleIsoEG26er;
//   Bool_t          L1_SingleIsoEG28;
//   Bool_t          L1_SingleIsoEG28er;
//   Bool_t          L1_SingleIsoEG30;
//   Bool_t          L1_SingleIsoEG30er;
//   Bool_t          L1_SingleIsoEG32;
//   Bool_t          L1_SingleIsoEG32er;
//   Bool_t          L1_SingleIsoEG34;
//   Bool_t          L1_SingleIsoEG34er;
//   Bool_t          L1_SingleIsoEG36;
//   Bool_t          L1_SingleJet120;
//   Bool_t          L1_SingleJet12_BptxAND;
//   Bool_t          L1_SingleJet140;
//   Bool_t          L1_SingleJet150;
//   Bool_t          L1_SingleJet16;
//   Bool_t          L1_SingleJet160;
//   Bool_t          L1_SingleJet170;
//   Bool_t          L1_SingleJet180;
//   Bool_t          L1_SingleJet20;
//   Bool_t          L1_SingleJet200;
//   Bool_t          L1_SingleJet35;
//   Bool_t          L1_SingleJet60;
//   Bool_t          L1_SingleJet8_BptxAND;
//   Bool_t          L1_SingleJet90;
//   Bool_t          L1_SingleJetC20_NotBptxOR;
//   Bool_t          L1_SingleJetC20_NotBptxOR_3BX;
//   Bool_t          L1_SingleJetC32_NotBptxOR;
//   Bool_t          L1_SingleJetC32_NotBptxOR_3BX;
//   Bool_t          L1_SingleJetC36_NotBptxOR_3BX;
//   Bool_t          L1_SingleMu10_LowQ;
//   Bool_t          L1_SingleMu12;
//   Bool_t          L1_SingleMu14;
//   Bool_t          L1_SingleMu14er;
//   Bool_t          L1_SingleMu16;
//   Bool_t          L1_SingleMu16er;
//   Bool_t          L1_SingleMu18;
//   Bool_t          L1_SingleMu18er;
//   Bool_t          L1_SingleMu20;
//   Bool_t          L1_SingleMu20er;
//   Bool_t          L1_SingleMu22;
//   Bool_t          L1_SingleMu22er;
//   Bool_t          L1_SingleMu25;
//   Bool_t          L1_SingleMu25er;
//   Bool_t          L1_SingleMu3;
//   Bool_t          L1_SingleMu30;
//   Bool_t          L1_SingleMu30er;
//   Bool_t          L1_SingleMu5;
//   Bool_t          L1_SingleMu7;
//   Bool_t          L1_SingleMuCosmics;
//   Bool_t          L1_SingleMuOpen;
//   Bool_t          L1_SingleMuOpen_NotBptxOR;
//   Bool_t          L1_SingleMuOpen_NotBptxOR_3BX;
//   Bool_t          L1_SingleTau100er;
//   Bool_t          L1_SingleTau120er;
//   Bool_t          L1_SingleTau80er;
//   Bool_t          L1_TripleEG_14_10_8;
//   Bool_t          L1_TripleEG_18_17_8;
//   Bool_t          L1_TripleJet_84_68_48_VBF;
//   Bool_t          L1_TripleJet_88_72_56_VBF;
//   Bool_t          L1_TripleJet_92_76_64_VBF;
//   Bool_t          L1_TripleMu0;
//   Bool_t          L1_TripleMu_5_5_3;
//   Bool_t          L1_ZeroBias;
//   Bool_t          L1_ZeroBias_FirstCollidingBunch;
//   Bool_t          L1_ZeroBias_copy;
//   Bool_t          HLT_Ele20_eta2p1_WPLoose_Gsf_LooseIsoPFTau28;
//   Bool_t          HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau29;
//   Bool_t          HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;
//   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
//   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
//   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
//   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
//   Bool_t          HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL;
//   Bool_t          HLT_Rsq0p02_MR400_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200;
//   Bool_t          HLT_Rsq0p02_MR450_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200;
//   Bool_t          L1_DoubleEG_25_12;
//   Bool_t          L1_DoubleIsoTau36er;
//   Bool_t          L1_DoubleMu0er1p4_dEta_Max1p8_OS;
//   Bool_t          L1_ETM75;
//   Bool_t          L1_ETM75_Jet60_dPhi_Min0p4;
//   Bool_t          L1_ETM85;
//   Bool_t          L1_ETM95;
//   Bool_t          L1_Mu20_IsoEG6;
//   Bool_t          L1_Mu22er_IsoTau26er;
//   Bool_t          L1_Mu25er_IsoTau26er;
//   Bool_t          L1_TripleMu_5_0_0;

   // List of branches
//   TBranch        *b_run;   //!
//   TBranch        *b_luminosityBlock;   //!
//   TBranch        *b_event;   //!
//   TBranch        *b_CaloMET_phi;   //!
//   TBranch        *b_CaloMET_pt;   //!
//   TBranch        *b_CaloMET_sumEt;   //!
//   TBranch        *b_ChsMET_phi;   //!
//   TBranch        *b_ChsMET_pt;   //!
//   TBranch        *b_ChsMET_sumEt;   //!
//   TBranch        *b_nCorrT1METJet;   //!
//   TBranch        *b_CorrT1METJet_area;   //!
//   TBranch        *b_CorrT1METJet_eta;   //!
//   TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
//   TBranch        *b_CorrT1METJet_phi;   //!
//   TBranch        *b_CorrT1METJet_rawPt;   //!
//   TBranch        *b_nElectron;   //!
//   TBranch        *b_Electron_deltaEtaSC;   //!
//   TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
//   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
//   TBranch        *b_Electron_dr03TkSumPt;   //!
//   TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
//   TBranch        *b_Electron_dxy;   //!
//   TBranch        *b_Electron_dxyErr;   //!
//   TBranch        *b_Electron_dz;   //!
//   TBranch        *b_Electron_dzErr;   //!
//   TBranch        *b_Electron_eCorr;   //!
//   TBranch        *b_Electron_eInvMinusPInv;   //!
//   TBranch        *b_Electron_energyErr;   //!
//   TBranch        *b_Electron_eta;   //!
//   TBranch        *b_Electron_hoe;   //!
//   TBranch        *b_Electron_ip3d;   //!
//   TBranch        *b_Electron_jetPtRelv2;   //!
//   TBranch        *b_Electron_jetRelIso;   //!
//   TBranch        *b_Electron_mass;   //!
//   TBranch        *b_Electron_miniPFRelIso_all;   //!
//   TBranch        *b_Electron_miniPFRelIso_chg;   //!
//   TBranch        *b_Electron_mvaFall17V1Iso;   //!
//   TBranch        *b_Electron_mvaFall17V1noIso;   //!
//   TBranch        *b_Electron_mvaFall17V2Iso;   //!
//   TBranch        *b_Electron_mvaFall17V2noIso;   //!
//   TBranch        *b_Electron_mvaSpring16GP;   //!
//   TBranch        *b_Electron_mvaSpring16HZZ;   //!
//   TBranch        *b_Electron_pfRelIso03_all;   //!
//   TBranch        *b_Electron_pfRelIso03_chg;   //!
//   TBranch        *b_Electron_phi;   //!
//   TBranch        *b_Electron_pt;   //!
//   TBranch        *b_Electron_r9;   //!
//   TBranch        *b_Electron_sieie;   //!
//   TBranch        *b_Electron_sip3d;   //!
//   TBranch        *b_Electron_mvaTTH;   //!
//   TBranch        *b_Electron_charge;   //!
//   TBranch        *b_Electron_cutBased;   //!
//   TBranch        *b_Electron_cutBased_Fall17_V1;   //!
//   TBranch        *b_Electron_cutBased_HLTPreSel;   //!
//   TBranch        *b_Electron_cutBased_Spring15;   //!
//   TBranch        *b_Electron_cutBased_Sum16;   //!
//   TBranch        *b_Electron_jetIdx;   //!
//   TBranch        *b_Electron_pdgId;   //!
//   TBranch        *b_Electron_photonIdx;   //!
//   TBranch        *b_Electron_tightCharge;   //!
//   TBranch        *b_Electron_vidNestedWPBitmap;   //!
//   TBranch        *b_Electron_vidNestedWPBitmapHEEP;   //!
//   TBranch        *b_Electron_vidNestedWPBitmapSpring15;   //!
//   TBranch        *b_Electron_vidNestedWPBitmapSum16;   //!
//   TBranch        *b_Electron_convVeto;   //!
//   TBranch        *b_Electron_cutBased_HEEP;   //!
//   TBranch        *b_Electron_isPFcand;   //!
//   TBranch        *b_Electron_lostHits;   //!
//   TBranch        *b_Electron_mvaFall17V1Iso_WP80;   //!
//   TBranch        *b_Electron_mvaFall17V1Iso_WP90;   //!
//   TBranch        *b_Electron_mvaFall17V1Iso_WPL;   //!
//   TBranch        *b_Electron_mvaFall17V1noIso_WP80;   //!
//   TBranch        *b_Electron_mvaFall17V1noIso_WP90;   //!
//   TBranch        *b_Electron_mvaFall17V1noIso_WPL;   //!
//   TBranch        *b_Electron_mvaFall17V2Iso_WP80;   //!
//   TBranch        *b_Electron_mvaFall17V2Iso_WP90;   //!
//   TBranch        *b_Electron_mvaFall17V2Iso_WPL;   //!
//   TBranch        *b_Electron_mvaFall17V2noIso_WP80;   //!
//   TBranch        *b_Electron_mvaFall17V2noIso_WP90;   //!
//   TBranch        *b_Electron_mvaFall17V2noIso_WPL;   //!
//   TBranch        *b_Electron_mvaSpring16GP_WP80;   //!
//   TBranch        *b_Electron_mvaSpring16GP_WP90;   //!
//   TBranch        *b_Electron_mvaSpring16HZZ_WPL;   //!
//   TBranch        *b_Electron_seedGain;   //!
//   TBranch        *b_nFatJet;   //!
//   TBranch        *b_FatJet_area;   //!
//   TBranch        *b_FatJet_btagCMVA;   //!
//   TBranch        *b_FatJet_btagCSVV2;   //!
//   TBranch        *b_FatJet_btagDDBvL;   //!
//   TBranch        *b_FatJet_btagDDBvL_noMD;   //!
//   TBranch        *b_FatJet_btagDDCvB;   //!
//   TBranch        *b_FatJet_btagDDCvB_noMD;   //!
//   TBranch        *b_FatJet_btagDDCvL;   //!
//   TBranch        *b_FatJet_btagDDCvL_noMD;   //!
//   TBranch        *b_FatJet_btagDeepB;   //!
//   TBranch        *b_FatJet_btagHbb;   //!
//   TBranch        *b_FatJet_deepTagMD_H4qvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_HbbvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_TvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_WvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_ZHbbvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_ZHccvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_ZbbvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_ZvsQCD;   //!
//   TBranch        *b_FatJet_deepTagMD_bbvsLight;   //!
//   TBranch        *b_FatJet_deepTagMD_ccvsLight;   //!
//   TBranch        *b_FatJet_deepTag_H;   //!
//   TBranch        *b_FatJet_deepTag_QCD;   //!
//   TBranch        *b_FatJet_deepTag_QCDothers;   //!
//   TBranch        *b_FatJet_deepTag_TvsQCD;   //!
//   TBranch        *b_FatJet_deepTag_WvsQCD;   //!
//   TBranch        *b_FatJet_deepTag_ZvsQCD;   //!
//   TBranch        *b_FatJet_eta;   //!
//   TBranch        *b_FatJet_mass;   //!
//   TBranch        *b_FatJet_msoftdrop;   //!
//   TBranch        *b_FatJet_n2b1;   //!
//   TBranch        *b_FatJet_n3b1;   //!
//   TBranch        *b_FatJet_phi;   //!
//   TBranch        *b_FatJet_pt;   //!
//   TBranch        *b_FatJet_rawFactor;   //!
//   TBranch        *b_FatJet_tau1;   //!
//   TBranch        *b_FatJet_tau2;   //!
//   TBranch        *b_FatJet_tau3;   //!
//   TBranch        *b_FatJet_tau4;   //!
//   TBranch        *b_FatJet_jetId;   //!
//   TBranch        *b_FatJet_subJetIdx1;   //!
//   TBranch        *b_FatJet_subJetIdx2;   //!
//   TBranch        *b_nFsrPhoton;   //!
//   TBranch        *b_FsrPhoton_dROverEt2;   //!
//   TBranch        *b_FsrPhoton_eta;   //!
//   TBranch        *b_FsrPhoton_phi;   //!
//   TBranch        *b_FsrPhoton_pt;   //!
//   TBranch        *b_FsrPhoton_relIso03;   //!
//   TBranch        *b_FsrPhoton_muonIdx;   //!
//   TBranch        *b_nIsoTrack;   //!
//   TBranch        *b_IsoTrack_dxy;   //!
//   TBranch        *b_IsoTrack_dz;   //!
//   TBranch        *b_IsoTrack_eta;   //!
//   TBranch        *b_IsoTrack_pfRelIso03_all;   //!
//   TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
//   TBranch        *b_IsoTrack_phi;   //!
//   TBranch        *b_IsoTrack_pt;   //!
//   TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
//   TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
//   TBranch        *b_IsoTrack_fromPV;   //!
//   TBranch        *b_IsoTrack_pdgId;   //!
//   TBranch        *b_IsoTrack_isHighPurityTrack;   //!
//   TBranch        *b_IsoTrack_isPFcand;   //!
//   TBranch        *b_IsoTrack_isFromLostTrack;   //!
//   TBranch        *b_nJet;   //!
//   TBranch        *b_Jet_area;   //!
//   TBranch        *b_Jet_btagCMVA;   //!
//   TBranch        *b_Jet_btagCSVV2;   //!
//   TBranch        *b_Jet_btagDeepB;   //!
//   TBranch        *b_Jet_btagDeepC;   //!
//   TBranch        *b_Jet_btagDeepFlavB;   //!
//   TBranch        *b_Jet_btagDeepFlavC;   //!
//   TBranch        *b_Jet_chEmEF;   //!
//   TBranch        *b_Jet_chHEF;   //!
//   TBranch        *b_Jet_eta;   //!
//   TBranch        *b_Jet_jercCHF;   //!
//   TBranch        *b_Jet_jercCHPUF;   //!
//   TBranch        *b_Jet_mass;   //!
//   TBranch        *b_Jet_muEF;   //!
//   TBranch        *b_Jet_muonSubtrFactor;   //!
//   TBranch        *b_Jet_neEmEF;   //!
//   TBranch        *b_Jet_neHEF;   //!
//   TBranch        *b_Jet_phi;   //!
//   TBranch        *b_Jet_pt;   //!
//   TBranch        *b_Jet_qgl;   //!
//   TBranch        *b_Jet_rawFactor;   //!
//   TBranch        *b_Jet_bRegCorr;   //!
//   TBranch        *b_Jet_bRegRes;   //!
//   TBranch        *b_Jet_electronIdx1;   //!
//   TBranch        *b_Jet_electronIdx2;   //!
//   TBranch        *b_Jet_jetId;   //!
//   TBranch        *b_Jet_muonIdx1;   //!
//   TBranch        *b_Jet_muonIdx2;   //!
//   TBranch        *b_Jet_nConstituents;   //!
//   TBranch        *b_Jet_nElectrons;   //!
//   TBranch        *b_Jet_nMuons;   //!
//   TBranch        *b_Jet_puId;   //!
//   TBranch        *b_L1PreFiringWeight_Dn;   //!
//   TBranch        *b_L1PreFiringWeight_Nom;   //!
//   TBranch        *b_L1PreFiringWeight_Up;   //!
//   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
//   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
//   TBranch        *b_MET_covXX;   //!
//   TBranch        *b_MET_covXY;   //!
//   TBranch        *b_MET_covYY;   //!
//   TBranch        *b_MET_phi;   //!
//   TBranch        *b_MET_pt;   //!
//   TBranch        *b_MET_significance;   //!
//   TBranch        *b_MET_sumEt;   //!
//   TBranch        *b_nMuon;   //!
//   TBranch        *b_Muon_dxy;   //!
//   TBranch        *b_Muon_dxyErr;   //!
//   TBranch        *b_Muon_dz;   //!
//   TBranch        *b_Muon_dzErr;   //!
//   TBranch        *b_Muon_eta;   //!
//   TBranch        *b_Muon_ip3d;   //!
//   TBranch        *b_Muon_jetPtRelv2;   //!
//   TBranch        *b_Muon_jetRelIso;   //!
//   TBranch        *b_Muon_mass;   //!
//   TBranch        *b_Muon_miniPFRelIso_all;   //!
//   TBranch        *b_Muon_miniPFRelIso_chg;   //!
//   TBranch        *b_Muon_pfRelIso03_all;   //!
//   TBranch        *b_Muon_pfRelIso03_chg;   //!
//   TBranch        *b_Muon_pfRelIso04_all;   //!
//   TBranch        *b_Muon_phi;   //!
//   TBranch        *b_Muon_pt;   //!
//   TBranch        *b_Muon_ptErr;   //!
//   TBranch        *b_Muon_segmentComp;   //!
//   TBranch        *b_Muon_sip3d;   //!
//   TBranch        *b_Muon_tkRelIso;   //!
//   TBranch        *b_Muon_tunepRelPt;   //!
//   TBranch        *b_Muon_mvaLowPt;   //!
//   TBranch        *b_Muon_mvaTTH;   //!
//   TBranch        *b_Muon_charge;   //!
//   TBranch        *b_Muon_jetIdx;   //!
//   TBranch        *b_Muon_nStations;   //!
//   TBranch        *b_Muon_nTrackerLayers;   //!
//   TBranch        *b_Muon_pdgId;   //!
//   TBranch        *b_Muon_tightCharge;   //!
//   TBranch        *b_Muon_fsrPhotonIdx;   //!
//   TBranch        *b_Muon_highPtId;   //!
//   TBranch        *b_Muon_inTimeMuon;   //!
//   TBranch        *b_Muon_isGlobal;   //!
//   TBranch        *b_Muon_isPFcand;   //!
//   TBranch        *b_Muon_isTracker;   //!
//   TBranch        *b_Muon_looseId;   //!
//   TBranch        *b_Muon_mediumId;   //!
//   TBranch        *b_Muon_mediumPromptId;   //!
//   TBranch        *b_Muon_miniIsoId;   //!
//   TBranch        *b_Muon_multiIsoId;   //!
//   TBranch        *b_Muon_mvaId;   //!
//   TBranch        *b_Muon_pfIsoId;   //!
//   TBranch        *b_Muon_softId;   //!
//   TBranch        *b_Muon_softMvaId;   //!
//   TBranch        *b_Muon_tightId;   //!
//   TBranch        *b_Muon_tkIsoId;   //!
//   TBranch        *b_Muon_triggerIdLoose;   //!
//   TBranch        *b_nPhoton;   //!
//   TBranch        *b_Photon_eCorr;   //!
//   TBranch        *b_Photon_energyErr;   //!
//   TBranch        *b_Photon_eta;   //!
//   TBranch        *b_Photon_hoe;   //!
//   TBranch        *b_Photon_mass;   //!
//   TBranch        *b_Photon_mvaID;   //!
//   TBranch        *b_Photon_mvaID17;   //!
//   TBranch        *b_Photon_pfRelIso03_all;   //!
//   TBranch        *b_Photon_pfRelIso03_chg;   //!
//   TBranch        *b_Photon_phi;   //!
//   TBranch        *b_Photon_pt;   //!
//   TBranch        *b_Photon_r9;   //!
//   TBranch        *b_Photon_sieie;   //!
//   TBranch        *b_Photon_charge;   //!
//   TBranch        *b_Photon_cutBased;   //!
//   TBranch        *b_Photon_cutBased17Bitmap;   //!
//   TBranch        *b_Photon_electronIdx;   //!
//   TBranch        *b_Photon_jetIdx;   //!
//   TBranch        *b_Photon_pdgId;   //!
//   TBranch        *b_Photon_vidNestedWPBitmap;   //!
//   TBranch        *b_Photon_electronVeto;   //!
//   TBranch        *b_Photon_isScEtaEB;   //!
//   TBranch        *b_Photon_isScEtaEE;   //!
//   TBranch        *b_Photon_mvaID17_WP80;   //!
//   TBranch        *b_Photon_mvaID17_WP90;   //!
//   TBranch        *b_Photon_mvaID_WP80;   //!
//   TBranch        *b_Photon_mvaID_WP90;   //!
//   TBranch        *b_Photon_pixelSeed;   //!
//   TBranch        *b_Photon_seedGain;   //!
//   TBranch        *b_PuppiMET_phi;   //!
//   TBranch        *b_PuppiMET_pt;   //!
//   TBranch        *b_PuppiMET_sumEt;   //!
//   TBranch        *b_RawMET_phi;   //!
//   TBranch        *b_RawMET_pt;   //!
//   TBranch        *b_RawMET_sumEt;   //!
//   TBranch        *b_fixedGridRhoFastjetAll;   //!
//   TBranch        *b_fixedGridRhoFastjetCentral;   //!
//   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
//   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
//   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
//   TBranch        *b_nSoftActivityJet;   //!
//   TBranch        *b_SoftActivityJet_eta;   //!
//   TBranch        *b_SoftActivityJet_phi;   //!
//   TBranch        *b_SoftActivityJet_pt;   //!
//   TBranch        *b_SoftActivityJetHT;   //!
//   TBranch        *b_SoftActivityJetHT10;   //!
//   TBranch        *b_SoftActivityJetHT2;   //!
//   TBranch        *b_SoftActivityJetHT5;   //!
//   TBranch        *b_SoftActivityJetNjets10;   //!
//   TBranch        *b_SoftActivityJetNjets2;   //!
//   TBranch        *b_SoftActivityJetNjets5;   //!
//   TBranch        *b_nSubJet;   //!
//   TBranch        *b_SubJet_btagCMVA;   //!
//   TBranch        *b_SubJet_btagCSVV2;   //!
//   TBranch        *b_SubJet_btagDeepB;   //!
//   TBranch        *b_SubJet_eta;   //!
//   TBranch        *b_SubJet_mass;   //!
//   TBranch        *b_SubJet_n2b1;   //!
//   TBranch        *b_SubJet_n3b1;   //!
//   TBranch        *b_SubJet_phi;   //!
//   TBranch        *b_SubJet_pt;   //!
//   TBranch        *b_SubJet_rawFactor;   //!
//   TBranch        *b_SubJet_tau1;   //!
//   TBranch        *b_SubJet_tau2;   //!
//   TBranch        *b_SubJet_tau3;   //!
//   TBranch        *b_SubJet_tau4;   //!
//   TBranch        *b_nTau;   //!
//   TBranch        *b_Tau_chargedIso;   //!
//   TBranch        *b_Tau_dxy;   //!
//   TBranch        *b_Tau_dz;   //!
//   TBranch        *b_Tau_eta;   //!
//   TBranch        *b_Tau_leadTkDeltaEta;   //!
//   TBranch        *b_Tau_leadTkDeltaPhi;   //!
//   TBranch        *b_Tau_leadTkPtOverTauPt;   //!
//   TBranch        *b_Tau_mass;   //!
//   TBranch        *b_Tau_neutralIso;   //!
//   TBranch        *b_Tau_phi;   //!
//   TBranch        *b_Tau_photonsOutsideSignalCone;   //!
//   TBranch        *b_Tau_pt;   //!
//   TBranch        *b_Tau_puCorr;   //!
//   TBranch        *b_Tau_rawAntiEle;   //!
//   TBranch        *b_Tau_rawAntiEle2018;   //!
//   TBranch        *b_Tau_rawDeepTau2017v2p1VSe;   //!
//   TBranch        *b_Tau_rawDeepTau2017v2p1VSjet;   //!
//   TBranch        *b_Tau_rawDeepTau2017v2p1VSmu;   //!
//   TBranch        *b_Tau_rawIso;   //!
//   TBranch        *b_Tau_rawIsodR03;   //!
//   TBranch        *b_Tau_rawMVAnewDM2017v2;   //!
//   TBranch        *b_Tau_rawMVAoldDM;   //!
//   TBranch        *b_Tau_rawMVAoldDM2017v1;   //!
//   TBranch        *b_Tau_rawMVAoldDM2017v2;   //!
//   TBranch        *b_Tau_rawMVAoldDMdR032017v2;   //!
//   TBranch        *b_Tau_charge;   //!
//   TBranch        *b_Tau_decayMode;   //!
//   TBranch        *b_Tau_jetIdx;   //!
//   TBranch        *b_Tau_rawAntiEleCat;   //!
//   TBranch        *b_Tau_rawAntiEleCat2018;   //!
//   TBranch        *b_Tau_idAntiEle;   //!
//   TBranch        *b_Tau_idAntiEle2018;   //!
//   TBranch        *b_Tau_idAntiMu;   //!
//   TBranch        *b_Tau_idDecayMode;   //!
//   TBranch        *b_Tau_idDecayModeNewDMs;   //!
//   TBranch        *b_Tau_idDeepTau2017v2p1VSe;   //!
//   TBranch        *b_Tau_idDeepTau2017v2p1VSjet;   //!
//   TBranch        *b_Tau_idDeepTau2017v2p1VSmu;   //!
//   TBranch        *b_Tau_idMVAnewDM2017v2;   //!
//   TBranch        *b_Tau_idMVAoldDM;   //!
//   TBranch        *b_Tau_idMVAoldDM2017v1;   //!
//   TBranch        *b_Tau_idMVAoldDM2017v2;   //!
//   TBranch        *b_Tau_idMVAoldDMdR032017v2;   //!
//   TBranch        *b_TkMET_phi;   //!
//   TBranch        *b_TkMET_pt;   //!
//   TBranch        *b_TkMET_sumEt;   //!
//   TBranch        *b_nTrigObj;   //!
//   TBranch        *b_TrigObj_pt;   //!
//   TBranch        *b_TrigObj_eta;   //!
//   TBranch        *b_TrigObj_phi;   //!
//   TBranch        *b_TrigObj_l1pt;   //!
//   TBranch        *b_TrigObj_l1pt_2;   //!
//   TBranch        *b_TrigObj_l2pt;   //!
//   TBranch        *b_TrigObj_id;   //!
//   TBranch        *b_TrigObj_l1iso;   //!
//   TBranch        *b_TrigObj_l1charge;   //!
//   TBranch        *b_TrigObj_filterBits;   //!
//   TBranch        *b_nOtherPV;   //!
//   TBranch        *b_OtherPV_z;   //!
//   TBranch        *b_PV_ndof;   //!
//   TBranch        *b_PV_x;   //!
//   TBranch        *b_PV_y;   //!
//   TBranch        *b_PV_z;   //!
//   TBranch        *b_PV_chi2;   //!
//   TBranch        *b_PV_score;   //!
//   TBranch        *b_PV_npvs;   //!
//   TBranch        *b_PV_npvsGood;   //!
//   TBranch        *b_nSV;   //!
//   TBranch        *b_SV_dlen;   //!
//   TBranch        *b_SV_dlenSig;   //!
//   TBranch        *b_SV_dxy;   //!
//   TBranch        *b_SV_dxySig;   //!
//   TBranch        *b_SV_pAngle;   //!
//   TBranch        *b_Electron_cleanmask;   //!
//   TBranch        *b_Jet_cleanmask;   //!
//   TBranch        *b_Muon_cleanmask;   //!
//   TBranch        *b_Photon_cleanmask;   //!
//   TBranch        *b_Tau_cleanmask;   //!
//   TBranch        *b_SV_chi2;   //!
//   TBranch        *b_SV_eta;   //!
//   TBranch        *b_SV_mass;   //!
//   TBranch        *b_SV_ndof;   //!
//   TBranch        *b_SV_phi;   //!
//   TBranch        *b_SV_pt;   //!
//   TBranch        *b_SV_x;   //!
//   TBranch        *b_SV_y;   //!
//   TBranch        *b_SV_z;   //!
//   TBranch        *b_Flag_HBHENoiseFilter;   //!
//   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
//   TBranch        *b_Flag_CSCTightHaloFilter;   //!
//   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
//   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
//   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
//   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
//   TBranch        *b_Flag_HcalStripHaloFilter;   //!
//   TBranch        *b_Flag_hcalLaserEventFilter;   //!
//   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
//   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
//   TBranch        *b_Flag_ecalBadCalibFilter;   //!
//   TBranch        *b_Flag_goodVertices;   //!
//   TBranch        *b_Flag_eeBadScFilter;   //!
//   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
//   TBranch        *b_Flag_trkPOGFilters;   //!
//   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
//   TBranch        *b_Flag_muonBadTrackFilter;   //!
//   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
//   TBranch        *b_Flag_BadPFMuonFilter;   //!
//   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
//   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
//   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
//   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
//   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
//   TBranch        *b_Flag_METFilters;   //!
//   TBranch        *b_HLTriggerFirstPath;   //!
//   TBranch        *b_HLT_AK8PFJet360_TrimMass30;   //!
//   TBranch        *b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;   //!
//   TBranch        *b_HLT_AK8PFHT650_TrimR0p1PT0p03Mass50;   //!
//   TBranch        *b_HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20;   //!
//   TBranch        *b_HLT_CaloJet500_NoJetID;   //!
//   TBranch        *b_HLT_Dimuon13_PsiPrime;   //!
//   TBranch        *b_HLT_Dimuon13_Upsilon;   //!
//   TBranch        *b_HLT_Dimuon20_Jpsi;   //!
//   TBranch        *b_HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_DoubleEle33_CaloIdL;   //!
//   TBranch        *b_HLT_DoubleEle33_CaloIdL_MW;   //!
//   TBranch        *b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW;   //!
//   TBranch        *b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_DoubleEle37_Ele27_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_DoubleMu33NoFiltersNoVtx;   //!
//   TBranch        *b_HLT_DoubleMu38NoFiltersNoVtx;   //!
//   TBranch        *b_HLT_DoubleMu23NoFiltersNoVtxDisplaced;   //!
//   TBranch        *b_HLT_DoubleMu28NoFiltersNoVtxDisplaced;   //!
//   TBranch        *b_HLT_DoubleMu4_3_Bs;   //!
//   TBranch        *b_HLT_DoubleMu4_3_Jpsi_Displaced;   //!
//   TBranch        *b_HLT_DoubleMu4_JpsiTrk_Displaced;   //!
//   TBranch        *b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;   //!
//   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu;   //!
//   TBranch        *b_HLT_DoubleMu4_PsiPrimeTrk_Displaced;   //!
//   TBranch        *b_HLT_Mu7p5_L2Mu2_Jpsi;   //!
//   TBranch        *b_HLT_Mu7p5_L2Mu2_Upsilon;   //!
//   TBranch        *b_HLT_Mu7p5_Track2_Jpsi;   //!
//   TBranch        *b_HLT_Mu7p5_Track3p5_Jpsi;   //!
//   TBranch        *b_HLT_Mu7p5_Track7_Jpsi;   //!
//   TBranch        *b_HLT_Mu7p5_Track2_Upsilon;   //!
//   TBranch        *b_HLT_Mu7p5_Track3p5_Upsilon;   //!
//   TBranch        *b_HLT_Mu7p5_Track7_Upsilon;   //!
//   TBranch        *b_HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing;   //!
//   TBranch        *b_HLT_Dimuon0er16_Jpsi_NoVertexing;   //!
//   TBranch        *b_HLT_Dimuon6_Jpsi_NoVertexing;   //!
//   TBranch        *b_HLT_DoublePhoton60;   //!
//   TBranch        *b_HLT_DoublePhoton85;   //!
//   TBranch        *b_HLT_Ele22_eta2p1_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_Ele23_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele23_WPLoose_Gsf_WHbbBoost;   //!
//   TBranch        *b_HLT_Ele24_eta2p1_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20;   //!
//   TBranch        *b_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30;   //!
//   TBranch        *b_HLT_Ele25_WPTight_Gsf;   //!
//   TBranch        *b_HLT_Ele25_eta2p1_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele25_eta2p1_WPTight_Gsf;   //!
//   TBranch        *b_HLT_Ele27_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele27_WPLoose_Gsf_WHbbBoost;   //!
//   TBranch        *b_HLT_Ele27_WPTight_Gsf;   //!
//   TBranch        *b_HLT_Ele27_WPTight_Gsf_L1JetTauSeeded;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPTight_Gsf;   //!
//   TBranch        *b_HLT_Ele32_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_Ele32_eta2p1_WPTight_Gsf;   //!
//   TBranch        *b_HLT_Ele35_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50;   //!
//   TBranch        *b_HLT_Ele45_WPLoose_Gsf;   //!
//   TBranch        *b_HLT_Ele45_WPLoose_Gsf_L1JetTauSeeded;   //!
//   TBranch        *b_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50;   //!
//   TBranch        *b_HLT_Ele105_CaloIdVT_GsfTrkIdT;   //!
//   TBranch        *b_HLT_Ele30WP60_SC4_Mass55;   //!
//   TBranch        *b_HLT_Ele30WP60_Ele8_Mass55;   //!
//   TBranch        *b_HLT_HT200;   //!
//   TBranch        *b_HLT_HT275;   //!
//   TBranch        *b_HLT_HT325;   //!
//   TBranch        *b_HLT_HT425;   //!
//   TBranch        *b_HLT_HT575;   //!
//   TBranch        *b_HLT_HT410to430;   //!
//   TBranch        *b_HLT_HT430to450;   //!
//   TBranch        *b_HLT_HT450to470;   //!
//   TBranch        *b_HLT_HT470to500;   //!
//   TBranch        *b_HLT_HT500to550;   //!
//   TBranch        *b_HLT_HT550to650;   //!
//   TBranch        *b_HLT_HT650;   //!
//   TBranch        *b_HLT_Mu16_eta2p1_MET30;   //!
//   TBranch        *b_HLT_IsoMu16_eta2p1_MET30;   //!
//   TBranch        *b_HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1;   //!
//   TBranch        *b_HLT_IsoMu17_eta2p1_LooseIsoPFTau20;   //!
//   TBranch        *b_HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_DoubleIsoMu17_eta2p1;   //!
//   TBranch        *b_HLT_DoubleIsoMu17_eta2p1_noDzCut;   //!
//   TBranch        *b_HLT_IsoMu18;   //!
//   TBranch        *b_HLT_IsoMu19_eta2p1_LooseIsoPFTau20;   //!
//   TBranch        *b_HLT_IsoMu19_eta2p1_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_IsoMu19_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_IsoMu20;   //!
//   TBranch        *b_HLT_IsoMu21_eta2p1_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_IsoMu21_eta2p1_LooseIsoPFTau50_Trk30_eta2p1_SingleL1;   //!
//   TBranch        *b_HLT_IsoMu21_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg;   //!
//   TBranch        *b_HLT_IsoMu22;   //!
//   TBranch        *b_HLT_IsoMu22_eta2p1;   //!
//   TBranch        *b_HLT_IsoMu24;   //!
//   TBranch        *b_HLT_IsoMu27;   //!
//   TBranch        *b_HLT_IsoTkMu18;   //!
//   TBranch        *b_HLT_IsoTkMu20;   //!
//   TBranch        *b_HLT_IsoTkMu22;   //!
//   TBranch        *b_HLT_IsoTkMu22_eta2p1;   //!
//   TBranch        *b_HLT_IsoTkMu24;   //!
//   TBranch        *b_HLT_IsoTkMu27;   //!
//   TBranch        *b_HLT_JetE30_NoBPTX3BX;   //!
//   TBranch        *b_HLT_JetE30_NoBPTX;   //!
//   TBranch        *b_HLT_JetE50_NoBPTX3BX;   //!
//   TBranch        *b_HLT_JetE70_NoBPTX3BX;   //!
//   TBranch        *b_HLT_L1SingleMu18;   //!
//   TBranch        *b_HLT_L2Mu10;   //!
//   TBranch        *b_HLT_L1SingleMuOpen;   //!
//   TBranch        *b_HLT_L1SingleMuOpen_DT;   //!
//   TBranch        *b_HLT_L2DoubleMu23_NoVertex;   //!
//   TBranch        *b_HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10;   //!
//   TBranch        *b_HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10;   //!
//   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX3BX;   //!
//   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX;   //!
//   TBranch        *b_HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX;   //!
//   TBranch        *b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;   //!
//   TBranch        *b_HLT_LooseIsoPFTau50_Trk30_eta2p1;   //!
//   TBranch        *b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80;   //!
//   TBranch        *b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET90;   //!
//   TBranch        *b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET110;   //!
//   TBranch        *b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120;   //!
//   TBranch        *b_HLT_PFTau120_eta2p1;   //!
//   TBranch        *b_HLT_VLooseIsoPFTau120_Trk50_eta2p1;   //!
//   TBranch        *b_HLT_VLooseIsoPFTau140_Trk50_eta2p1;   //!
//   TBranch        *b_HLT_Mu17_Mu8;   //!
//   TBranch        *b_HLT_Mu17_Mu8_DZ;   //!
//   TBranch        *b_HLT_Mu17_Mu8_SameSign;   //!
//   TBranch        *b_HLT_Mu17_Mu8_SameSign_DZ;   //!
//   TBranch        *b_HLT_Mu20_Mu10;   //!
//   TBranch        *b_HLT_Mu20_Mu10_DZ;   //!
//   TBranch        *b_HLT_Mu20_Mu10_SameSign;   //!
//   TBranch        *b_HLT_Mu20_Mu10_SameSign_DZ;   //!
//   TBranch        *b_HLT_Mu17_TkMu8_DZ;   //!
//   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;   //!
//   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;   //!
//   TBranch        *b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL;   //!
//   TBranch        *b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;   //!
//   TBranch        *b_HLT_Mu25_TkMu0_dEta18_Onia;   //!
//   TBranch        *b_HLT_Mu27_TkMu8;   //!
//   TBranch        *b_HLT_Mu30_TkMu11;   //!
//   TBranch        *b_HLT_Mu30_eta2p1_PFJet150_PFJet50;   //!
//   TBranch        *b_HLT_Mu40_TkMu11;   //!
//   TBranch        *b_HLT_Mu40_eta2p1_PFJet200_PFJet50;   //!
//   TBranch        *b_HLT_Mu20;   //!
//   TBranch        *b_HLT_TkMu20;   //!
//   TBranch        *b_HLT_Mu24_eta2p1;   //!
//   TBranch        *b_HLT_TkMu24_eta2p1;   //!
//   TBranch        *b_HLT_Mu27;   //!
//   TBranch        *b_HLT_TkMu27;   //!
//   TBranch        *b_HLT_Mu45_eta2p1;   //!
//   TBranch        *b_HLT_Mu50;   //!
//   TBranch        *b_HLT_TkMu50;   //!
//   TBranch        *b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL;   //!
//   TBranch        *b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL;   //!
//   TBranch        *b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL;   //!
//   TBranch        *b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL;   //!
//   TBranch        *b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL;   //!
//   TBranch        *b_HLT_DoubleMu18NoFiltersNoVtx;   //!
//   TBranch        *b_HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight;   //!
//   TBranch        *b_HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose;   //!
//   TBranch        *b_HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose;   //!
//   TBranch        *b_HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight;   //!
//   TBranch        *b_HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose;   //!
//   TBranch        *b_HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose;   //!
//   TBranch        *b_HLT_Mu28NoFiltersNoVtx_CentralCaloJet40;   //!
   TBranch        *b_HLT_PFHT300_PFMET100;   //!
   TBranch        *b_HLT_PFHT300_PFMET110;   //!
//   TBranch        *b_HLT_PFHT550_4JetPt50;   //!
//   TBranch        *b_HLT_PFHT650_4JetPt50;   //!
//   TBranch        *b_HLT_PFHT750_4JetPt50;   //!
//   TBranch        *b_HLT_PFJet15_NoCaloMatched;   //!
//   TBranch        *b_HLT_PFJet25_NoCaloMatched;   //!
//   TBranch        *b_HLT_DiPFJet15_NoCaloMatched;   //!
//   TBranch        *b_HLT_DiPFJet25_NoCaloMatched;   //!
//   TBranch        *b_HLT_DiPFJet15_FBEta3_NoCaloMatched;   //!
//   TBranch        *b_HLT_DiPFJet25_FBEta3_NoCaloMatched;   //!
//   TBranch        *b_HLT_DiPFJetAve15_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve25_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve35_HFJEC;   //!
//   TBranch        *b_HLT_AK8PFJet40;   //!
//   TBranch        *b_HLT_AK8PFJet60;   //!
//   TBranch        *b_HLT_AK8PFJet80;   //!
//   TBranch        *b_HLT_AK8PFJet140;   //!
//   TBranch        *b_HLT_AK8PFJet200;   //!
//   TBranch        *b_HLT_AK8PFJet260;   //!
//   TBranch        *b_HLT_AK8PFJet320;   //!
//   TBranch        *b_HLT_AK8PFJet400;   //!
//   TBranch        *b_HLT_AK8PFJet450;   //!
//   TBranch        *b_HLT_AK8PFJet500;   //!
//   TBranch        *b_HLT_PFJet40;   //!
//   TBranch        *b_HLT_PFJet60;   //!
//   TBranch        *b_HLT_PFJet80;   //!
//   TBranch        *b_HLT_PFJet140;   //!
//   TBranch        *b_HLT_PFJet200;   //!
//   TBranch        *b_HLT_PFJet260;   //!
//   TBranch        *b_HLT_PFJet320;   //!
//   TBranch        *b_HLT_PFJet400;   //!
//   TBranch        *b_HLT_PFJet450;   //!
//   TBranch        *b_HLT_PFJet500;   //!
//   TBranch        *b_HLT_DiPFJetAve40;   //!
//   TBranch        *b_HLT_DiPFJetAve60;   //!
//   TBranch        *b_HLT_DiPFJetAve80;   //!
//   TBranch        *b_HLT_DiPFJetAve140;   //!
//   TBranch        *b_HLT_DiPFJetAve200;   //!
//   TBranch        *b_HLT_DiPFJetAve260;   //!
//   TBranch        *b_HLT_DiPFJetAve320;   //!
//   TBranch        *b_HLT_DiPFJetAve400;   //!
//   TBranch        *b_HLT_DiPFJetAve500;   //!
//   TBranch        *b_HLT_DiPFJetAve60_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve80_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve100_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve160_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve220_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJetAve300_HFJEC;   //!
//   TBranch        *b_HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140;   //!
//   TBranch        *b_HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80;   //!
//   TBranch        *b_HLT_DiCentralPFJet55_PFMET110;   //!
//   TBranch        *b_HLT_DiCentralPFJet170;   //!
//   TBranch        *b_HLT_SingleCentralPFJet170_CFMax0p1;   //!
//   TBranch        *b_HLT_DiCentralPFJet170_CFMax0p1;   //!
//   TBranch        *b_HLT_DiCentralPFJet220_CFMax0p3;   //!
//   TBranch        *b_HLT_DiCentralPFJet330_CFMax0p5;   //!
//   TBranch        *b_HLT_DiCentralPFJet430;   //!
//   TBranch        *b_HLT_PFHT125;   //!
//   TBranch        *b_HLT_PFHT200;   //!
//   TBranch        *b_HLT_PFHT250;   //!
//   TBranch        *b_HLT_PFHT300;   //!
//   TBranch        *b_HLT_PFHT350;   //!
//   TBranch        *b_HLT_PFHT400;   //!
//   TBranch        *b_HLT_PFHT475;   //!
//   TBranch        *b_HLT_PFHT600;   //!
//   TBranch        *b_HLT_PFHT650;   //!
//   TBranch        *b_HLT_PFHT800;   //!
//   TBranch        *b_HLT_PFHT900;   //!
//   TBranch        *b_HLT_PFHT200_PFAlphaT0p51;   //!
//   TBranch        *b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57;   //!
//   TBranch        *b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63;   //!
//   TBranch        *b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55;   //!
//   TBranch        *b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58;   //!
//   TBranch        *b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53;   //!
//   TBranch        *b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54;   //!
//   TBranch        *b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52;   //!
//   TBranch        *b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53;   //!
//   TBranch        *b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51;   //!
//   TBranch        *b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52;   //!
   TBranch        *b_HLT_MET60_IsoTrk35_Loose;   //!
   TBranch        *b_HLT_MET75_IsoTrk50;   //!
   TBranch        *b_HLT_MET90_IsoTrk50;   //!
   TBranch        *b_HLT_PFMET120_BTagCSV_p067;   //!
   TBranch        *b_HLT_PFMET120_Mu5;   //!
   TBranch        *b_HLT_PFMET170_NotCleaned;   //!
   TBranch        *b_HLT_PFMET170_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET170_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMET170_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMET90_PFMHT90_IDTight;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight;   //!
//   TBranch        *b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067;   //!
//   TBranch        *b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight;   //!
//   TBranch        *b_HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq200;   //!
//   TBranch        *b_HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq460;   //!
//   TBranch        *b_HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq240;   //!
//   TBranch        *b_HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq500;   //!
//   TBranch        *b_HLT_QuadPFJet_VBF;   //!
//   TBranch        *b_HLT_L1_TripleJet_VBF;   //!
//   TBranch        *b_HLT_QuadJet45_TripleBTagCSV_p087;   //!
//   TBranch        *b_HLT_QuadJet45_DoubleBTagCSV_p087;   //!
//   TBranch        *b_HLT_DoubleJet90_Double30_TripleBTagCSV_p087;   //!
//   TBranch        *b_HLT_DoubleJet90_Double30_DoubleBTagCSV_p087;   //!
//   TBranch        *b_HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160;   //!
//   TBranch        *b_HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6;   //!
//   TBranch        *b_HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172;   //!
//   TBranch        *b_HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6;   //!
//   TBranch        *b_HLT_DoubleJetsC100_SingleBTagCSV_p026;   //!
//   TBranch        *b_HLT_DoubleJetsC100_SingleBTagCSV_p014;   //!
//   TBranch        *b_HLT_DoubleJetsC100_SingleBTagCSV_p026_SinglePFJetC350;   //!
//   TBranch        *b_HLT_DoubleJetsC100_SingleBTagCSV_p014_SinglePFJetC350;   //!
//   TBranch        *b_HLT_Photon135_PFMET100;   //!
//   TBranch        *b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40;   //!
//   TBranch        *b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF;   //!
//   TBranch        *b_HLT_Photon250_NoHE;   //!
//   TBranch        *b_HLT_Photon300_NoHE;   //!
//   TBranch        *b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60;   //!
//   TBranch        *b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15;   //!
//   TBranch        *b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40;   //!
//   TBranch        *b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF;   //!
//   TBranch        *b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40;   //!
//   TBranch        *b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF;   //!
//   TBranch        *b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40;   //!
//   TBranch        *b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF;   //!
//   TBranch        *b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40;   //!
//   TBranch        *b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF;   //!
//   TBranch        *b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40;   //!
//   TBranch        *b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF;   //!
//   TBranch        *b_HLT_Mu8_TrkIsoVVL;   //!
//   TBranch        *b_HLT_Mu17_TrkIsoVVL;   //!
//   TBranch        *b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
//   TBranch        *b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
//   TBranch        *b_HLT_Ele17_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
//   TBranch        *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
//   TBranch        *b_HLT_BTagMu_DiJet20_Mu5;   //!
//   TBranch        *b_HLT_BTagMu_DiJet40_Mu5;   //!
//   TBranch        *b_HLT_BTagMu_DiJet70_Mu5;   //!
//   TBranch        *b_HLT_BTagMu_DiJet110_Mu5;   //!
//   TBranch        *b_HLT_BTagMu_DiJet170_Mu5;   //!
//   TBranch        *b_HLT_BTagMu_Jet300_Mu5;   //!
//   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5;   //!
//   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
//   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_L1JetTauSeeded;   //!
//   TBranch        *b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
//   TBranch        *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;   //!
//   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_Mu37_Ele27_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_Mu27_Ele37_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL;   //!
//   TBranch        *b_HLT_Mu12_Photon25_CaloIdL;   //!
//   TBranch        *b_HLT_Mu12_Photon25_CaloIdL_L1ISO;   //!
//   TBranch        *b_HLT_Mu12_Photon25_CaloIdL_L1OR;   //!
//   TBranch        *b_HLT_Mu17_Photon22_CaloIdL_L1ISO;   //!
//   TBranch        *b_HLT_Mu17_Photon30_CaloIdL_L1ISO;   //!
//   TBranch        *b_HLT_Mu17_Photon35_CaloIdL_L1ISO;   //!
//   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL;   //!
//   TBranch        *b_HLT_TripleMu_5_3_3;   //!
//   TBranch        *b_HLT_TripleMu_12_10_5;   //!
   TBranch        *b_HLT_Mu3er_PFHT140_PFMET125;   //!
   TBranch        *b_HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067;   //!
   TBranch        *b_HLT_Mu6_PFHT200_PFMET100;   //!
   TBranch        *b_HLT_Mu14er_PFMET100;   //!
//   TBranch        *b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Ele17_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_Ele17_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_AK8DiPFJet280_200_TrimMass30;   //!
//   TBranch        *b_HLT_AK8DiPFJet250_200_TrimMass30;   //!
//   TBranch        *b_HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20;   //!
//   TBranch        *b_HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20;   //!
//   TBranch        *b_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5;   //!
//   TBranch        *b_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5;   //!
//   TBranch        *b_HLT_Photon22;   //!
//   TBranch        *b_HLT_Photon30;   //!
//   TBranch        *b_HLT_Photon36;   //!
//   TBranch        *b_HLT_Photon50;   //!
//   TBranch        *b_HLT_Photon75;   //!
//   TBranch        *b_HLT_Photon90;   //!
//   TBranch        *b_HLT_Photon120;   //!
//   TBranch        *b_HLT_Photon175;   //!
//   TBranch        *b_HLT_Photon165_HE10;   //!
//   TBranch        *b_HLT_Photon22_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon30_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon36_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon90_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon120_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Photon165_R9Id90_HE10_IsoM;   //!
//   TBranch        *b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;   //!
//   TBranch        *b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70;   //!
//   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55;   //!
//   TBranch        *b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55;   //!
//   TBranch        *b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55;   //!
//   TBranch        *b_HLT_Dimuon0_Jpsi_Muon;   //!
//   TBranch        *b_HLT_Dimuon0_Upsilon_Muon;   //!
//   TBranch        *b_HLT_QuadMuon0_Dimuon0_Jpsi;   //!
//   TBranch        *b_HLT_QuadMuon0_Dimuon0_Upsilon;   //!
//   TBranch        *b_HLT_Rsq0p25;   //!
//   TBranch        *b_HLT_Rsq0p30;   //!
//   TBranch        *b_HLT_RsqMR240_Rsq0p09_MR200;   //!
//   TBranch        *b_HLT_RsqMR240_Rsq0p09_MR200_4jet;   //!
//   TBranch        *b_HLT_RsqMR270_Rsq0p09_MR200;   //!
//   TBranch        *b_HLT_RsqMR270_Rsq0p09_MR200_4jet;   //!
//   TBranch        *b_HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200;   //!
//   TBranch        *b_HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200;   //!
//   TBranch        *b_HLT_HT200_DisplacedDijet40_DisplacedTrack;   //!
//   TBranch        *b_HLT_HT250_DisplacedDijet40_DisplacedTrack;   //!
//   TBranch        *b_HLT_HT350_DisplacedDijet40_DisplacedTrack;   //!
//   TBranch        *b_HLT_HT350_DisplacedDijet80_DisplacedTrack;   //!
//   TBranch        *b_HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack;   //!
//   TBranch        *b_HLT_HT350_DisplacedDijet40_Inclusive;   //!
//   TBranch        *b_HLT_HT400_DisplacedDijet40_Inclusive;   //!
//   TBranch        *b_HLT_HT500_DisplacedDijet40_Inclusive;   //!
//   TBranch        *b_HLT_HT550_DisplacedDijet40_Inclusive;   //!
//   TBranch        *b_HLT_HT550_DisplacedDijet80_Inclusive;   //!
//   TBranch        *b_HLT_HT650_DisplacedDijet80_Inclusive;   //!
//   TBranch        *b_HLT_HT750_DisplacedDijet80_Inclusive;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_DisplacedTrack;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_TightID_DisplacedTrack;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_Hadronic;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_TightID_Hadronic;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_VTightID_Hadronic;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_VVTightID_Hadronic;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack;   //!
//   TBranch        *b_HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack;   //!
   TBranch        *b_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
//   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight;   //!
//   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu100_PFMHTNoMu100_IDTight;   //!
//   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
//   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
//   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf_HT200;   //!
//   TBranch        *b_HLT_Photon90_CaloIdL_PFHT500;   //!
//   TBranch        *b_HLT_DoubleMu8_Mass8_PFHT250;   //!
//   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250;   //!
//   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250;   //!
//   TBranch        *b_HLT_DoubleMu8_Mass8_PFHT300;   //!
//   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300;   //!
//   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300;   //!
//   TBranch        *b_HLT_Mu10_CentralPFJet30_BTagCSV_p13;   //!
   TBranch        *b_HLT_DoubleMu3_PFMET50;   //!
//   TBranch        *b_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13;   //!
//   TBranch        *b_HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT350_PFMET50;   //!
//   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT600;   //!
//   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT350;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT400_PFMET50;   //!
//   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT400;   //!
//   TBranch        *b_HLT_Ele50_IsoVVVL_PFHT400;   //!
//   TBranch        *b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
//   TBranch        *b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;   //!
//   TBranch        *b_HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT350_PFMET50;   //!
//   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT600;   //!
//   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT350;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT400_PFMET50;   //!
//   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT400;   //!
//   TBranch        *b_HLT_Mu50_IsoVVVL_PFHT400;   //!
//   TBranch        *b_HLT_Dimuon16_Jpsi;   //!
//   TBranch        *b_HLT_Dimuon10_Jpsi_Barrel;   //!
//   TBranch        *b_HLT_Dimuon8_PsiPrime_Barrel;   //!
//   TBranch        *b_HLT_Dimuon8_Upsilon_Barrel;   //!
//   TBranch        *b_HLT_Dimuon0_Phi_Barrel;   //!
//   TBranch        *b_HLT_Mu16_TkMu0_dEta18_Onia;   //!
//   TBranch        *b_HLT_Mu16_TkMu0_dEta18_Phi;   //!
//   TBranch        *b_HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx;   //!
//   TBranch        *b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;   //!
//   TBranch        *b_HLT_Mu8;   //!
//   TBranch        *b_HLT_Mu17;   //!
//   TBranch        *b_HLT_Mu3_PFJet40;   //!
//   TBranch        *b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30;   //!
//   TBranch        *b_HLT_Ele12_CaloIdM_TrackIdM_PFJet30;   //!
//   TBranch        *b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30;   //!
//   TBranch        *b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30;   //!
//   TBranch        *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet140;   //!
//   TBranch        *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;   //!
//   TBranch        *b_HLT_PFHT400_SixJet30_DoubleBTagCSV_p056;   //!
//   TBranch        *b_HLT_PFHT450_SixJet40_BTagCSV_p056;   //!
//   TBranch        *b_HLT_PFHT400_SixJet30;   //!
//   TBranch        *b_HLT_PFHT450_SixJet40;   //!
//   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;   //!
//   TBranch        *b_HLT_Mu55;   //!
//   TBranch        *b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15;   //!
//   TBranch        *b_HLT_Photon90_CaloIdL_PFHT600;   //!
//   TBranch        *b_HLT_PixelTracks_Multiplicity60ForEndOfFill;   //!
//   TBranch        *b_HLT_PixelTracks_Multiplicity85ForEndOfFill;   //!
//   TBranch        *b_HLT_PixelTracks_Multiplicity110ForEndOfFill;   //!
//   TBranch        *b_HLT_PixelTracks_Multiplicity135ForEndOfFill;   //!
//   TBranch        *b_HLT_PixelTracks_Multiplicity160ForEndOfFill;   //!
//   TBranch        *b_HLT_FullTracks_Multiplicity80;   //!
//   TBranch        *b_HLT_FullTracks_Multiplicity100;   //!
//   TBranch        *b_HLT_FullTracks_Multiplicity130;   //!
//   TBranch        *b_HLT_FullTracks_Multiplicity150;   //!
//   TBranch        *b_HLT_ECALHT800;   //!
//   TBranch        *b_HLT_DiSC30_18_EIso_AND_HE_Mass70;   //!
   TBranch        *b_HLT_MET200;   //!
//   TBranch        *b_HLT_Ele27_HighEta_Ele20_Mass55;   //!
//   TBranch        *b_HLT_L1FatEvents;   //!
//   TBranch        *b_HLT_Physics;   //!
//   TBranch        *b_HLT_Physics_part0;   //!
//   TBranch        *b_HLT_Physics_part1;   //!
//   TBranch        *b_HLT_L1FatEvents_part0;   //!
//   TBranch        *b_HLT_L1FatEvents_part1;   //!
//   TBranch        *b_HLT_L1FatEvents_part2;   //!
//   TBranch        *b_HLT_L1FatEvents_part3;   //!
//   TBranch        *b_HLT_Random;   //!
//   TBranch        *b_HLT_ZeroBias;   //!
//   TBranch        *b_HLT_ZeroBias_part0;   //!
//   TBranch        *b_HLT_ZeroBias_part1;   //!
//   TBranch        *b_HLT_ZeroBias_part2;   //!
//   TBranch        *b_HLT_ZeroBias_part3;   //!
//   TBranch        *b_HLT_ZeroBias_part4;   //!
//   TBranch        *b_HLT_AK4CaloJet30;   //!
//   TBranch        *b_HLT_AK4CaloJet40;   //!
//   TBranch        *b_HLT_AK4CaloJet50;   //!
//   TBranch        *b_HLT_AK4CaloJet80;   //!
//   TBranch        *b_HLT_AK4CaloJet100;   //!
//   TBranch        *b_HLT_AK4PFJet30;   //!
//   TBranch        *b_HLT_AK4PFJet50;   //!
//   TBranch        *b_HLT_AK4PFJet80;   //!
//   TBranch        *b_HLT_AK4PFJet100;   //!
//   TBranch        *b_HLT_HISinglePhoton10;   //!
//   TBranch        *b_HLT_HISinglePhoton15;   //!
//   TBranch        *b_HLT_HISinglePhoton20;   //!
//   TBranch        *b_HLT_HISinglePhoton40;   //!
//   TBranch        *b_HLT_HISinglePhoton60;   //!
//   TBranch        *b_HLT_EcalCalibration;   //!
//   TBranch        *b_HLT_HcalCalibration;   //!
//   TBranch        *b_HLT_GlobalRunHPDNoise;   //!
//   TBranch        *b_HLT_L1BptxMinus;   //!
//   TBranch        *b_HLT_L1BptxPlus;   //!
//   TBranch        *b_HLT_L1NotBptxOR;   //!
//   TBranch        *b_HLT_L1BeamGasMinus;   //!
//   TBranch        *b_HLT_L1BeamGasPlus;   //!
//   TBranch        *b_HLT_L1BptxXOR;   //!
//   TBranch        *b_HLT_L1MinimumBiasHF_OR;   //!
//   TBranch        *b_HLT_L1MinimumBiasHF_AND;   //!
//   TBranch        *b_HLT_HcalNZS;   //!
//   TBranch        *b_HLT_HcalPhiSym;   //!
//   TBranch        *b_HLT_ZeroBias_FirstCollisionAfterAbortGap;   //!
//   TBranch        *b_HLT_ZeroBias_FirstCollisionAfterAbortGap_copy;   //!
//   TBranch        *b_HLT_ZeroBias_FirstCollisionAfterAbortGap_TCDS;   //!
//   TBranch        *b_HLT_ZeroBias_IsolatedBunches;   //!
//   TBranch        *b_HLT_Photon500;   //!
//   TBranch        *b_HLT_Photon600;   //!
//   TBranch        *b_HLT_Mu300;   //!
//   TBranch        *b_HLT_Mu350;   //!
   TBranch        *b_HLT_MET250;   //!
   TBranch        *b_HLT_MET300;   //!
   TBranch        *b_HLT_MET600;   //!
   TBranch        *b_HLT_MET700;   //!
   TBranch        *b_HLT_PFMET300;   //!
   TBranch        *b_HLT_PFMET400;   //!
   TBranch        *b_HLT_PFMET500;   //!
   TBranch        *b_HLT_PFMET600;   //!
//   TBranch        *b_HLT_Ele250_CaloIdVT_GsfTrkIdT;   //!
//   TBranch        *b_HLT_Ele300_CaloIdVT_GsfTrkIdT;   //!
//   TBranch        *b_HLT_HT2000;   //!
//   TBranch        *b_HLT_HT2500;   //!
//   TBranch        *b_HLT_IsoTrackHE;   //!
//   TBranch        *b_HLT_IsoTrackHB;   //!
//   TBranch        *b_HLTriggerFinalPath;   //!
//   TBranch        *b_HLT_HcalIsolatedbunch;   //!
//   TBranch        *b_L1Reco_step;   //!
//   TBranch        *b_Flag_HBHENoiseFilter;   //!
//   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
//   TBranch        *b_Flag_CSCTightHaloFilter;   //!
//   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
//   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
//   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
//   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
//   TBranch        *b_Flag_HcalStripHaloFilter;   //!
//   TBranch        *b_Flag_hcalLaserEventFilter;   //!
//   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
//   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
//   TBranch        *b_Flag_goodVertices;   //!
//   TBranch        *b_Flag_eeBadScFilter;   //!
//   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
//   TBranch        *b_Flag_trkPOGFilters;   //!
//   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
//   TBranch        *b_Flag_muonBadTrackFilter;   //!
//   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
//   TBranch        *b_Flag_BadPFMuonFilter;   //!
//   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
//   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
//   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
//   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
//   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
//   TBranch        *b_Flag_METFilters;   //!
//   TBranch        *b_L1_AlwaysTrue;   //!
//   TBranch        *b_L1_BPTX_LUT1_AND;   //!
//   TBranch        *b_L1_BPTX_LUT1_B1;   //!
//   TBranch        *b_L1_BPTX_LUT1_B2;   //!
//   TBranch        *b_L1_BPTX_LUT1_OR;   //!
//   TBranch        *b_L1_BPTX_LUT2_AND;   //!
//   TBranch        *b_L1_BPTX_LUT2_B1NotB2;   //!
//   TBranch        *b_L1_BPTX_LUT2_B2NotB1;   //!
//   TBranch        *b_L1_BPTX_LUT2_NotOR;   //!
//   TBranch        *b_L1_BPTX_TRIG2_AND;   //!
//   TBranch        *b_L1_BPTX_TRIG2_B1NotB2;   //!
//   TBranch        *b_L1_BPTX_TRIG2_B2NotB1;   //!
//   TBranch        *b_L1_BPTX_TRIG2_NotOR;   //!
//   TBranch        *b_L1_BRIL_TRIG0_AND;   //!
//   TBranch        *b_L1_BRIL_TRIG0_FstBunchInTrain;   //!
//   TBranch        *b_L1_BRIL_TRIG0_OR;   //!
//   TBranch        *b_L1_BRIL_TRIG0_delayedAND;   //!
//   TBranch        *b_L1_BRIL_TRIG3_AND;   //!
//   TBranch        *b_L1_BRIL_TRIG3_delayedAND;   //!
//   TBranch        *b_L1_BRIL_TRIG3_ref;   //!
//   TBranch        *b_L1_BeamGasB1;   //!
//   TBranch        *b_L1_BeamGasB2;   //!
//   TBranch        *b_L1_BeamGasMinus;   //!
//   TBranch        *b_L1_BeamGasPlus;   //!
//   TBranch        *b_L1_BptxMinus;   //!
//   TBranch        *b_L1_BptxOR;   //!
//   TBranch        *b_L1_BptxPlus;   //!
//   TBranch        *b_L1_BptxXOR;   //!
//   TBranch        *b_L1_DoubleEG6_HTT255;   //!
//   TBranch        *b_L1_DoubleEG_15_10;   //!
//   TBranch        *b_L1_DoubleEG_18_17;   //!
//   TBranch        *b_L1_DoubleEG_20_18;   //!
//   TBranch        *b_L1_DoubleEG_22_10;   //!
//   TBranch        *b_L1_DoubleEG_22_12;   //!
//   TBranch        *b_L1_DoubleEG_22_15;   //!
//   TBranch        *b_L1_DoubleEG_23_10;   //!
//   TBranch        *b_L1_DoubleEG_24_17;   //!
//   TBranch        *b_L1_DoubleIsoTau28er;   //!
//   TBranch        *b_L1_DoubleIsoTau30er;   //!
//   TBranch        *b_L1_DoubleIsoTau32er;   //!
//   TBranch        *b_L1_DoubleIsoTau33er;   //!
//   TBranch        *b_L1_DoubleIsoTau34er;   //!
//   TBranch        *b_L1_DoubleIsoTau35er;   //!
//   TBranch        *b_L1_DoubleJet12_ForwardBackward;   //!
//   TBranch        *b_L1_DoubleJet16_ForwardBackward;   //!
//   TBranch        *b_L1_DoubleJet8_ForwardBackward;   //!
//   TBranch        *b_L1_DoubleJetC100;   //!
//   TBranch        *b_L1_DoubleJetC112;   //!
//   TBranch        *b_L1_DoubleJetC120;   //!
//   TBranch        *b_L1_DoubleJetC40;   //!
//   TBranch        *b_L1_DoubleJetC50;   //!
//   TBranch        *b_L1_DoubleJetC60;   //!
//   TBranch        *b_L1_DoubleJetC60_ETM60;   //!
//   TBranch        *b_L1_DoubleJetC80;   //!
//   TBranch        *b_L1_DoubleMu0;   //!
//   TBranch        *b_L1_DoubleMu0_ETM40;   //!
//   TBranch        *b_L1_DoubleMu0_ETM55;   //!
//   TBranch        *b_L1_DoubleMu0er1p25_dEta_Max1p8_OS;   //!
//   TBranch        *b_L1_DoubleMu0er1p6_dEta_Max1p8;   //!
//   TBranch        *b_L1_DoubleMu0er1p6_dEta_Max1p8_OS;   //!
//   TBranch        *b_L1_DoubleMu7_EG14;   //!
//   TBranch        *b_L1_DoubleMu7_EG7;   //!
//   TBranch        *b_L1_DoubleMuOpen;   //!
//   TBranch        *b_L1_DoubleMu_10_0_dEta_Max1p8;   //!
//   TBranch        *b_L1_DoubleMu_10_3p5;   //!
//   TBranch        *b_L1_DoubleMu_10_Open;   //!
//   TBranch        *b_L1_DoubleMu_11_4;   //!
//   TBranch        *b_L1_DoubleMu_12_5;   //!
//   TBranch        *b_L1_DoubleMu_12_8;   //!
//   TBranch        *b_L1_DoubleMu_13_6;   //!
//   TBranch        *b_L1_DoubleMu_15_5;   //!
//   TBranch        *b_L1_DoubleTau50er;   //!
//   TBranch        *b_L1_EG25er_HTT125;   //!
//   TBranch        *b_L1_EG27er_HTT200;   //!
//   TBranch        *b_L1_ETM100;   //!
//   TBranch        *b_L1_ETM120;   //!
//   TBranch        *b_L1_ETM30;   //!
//   TBranch        *b_L1_ETM40;   //!
//   TBranch        *b_L1_ETM50;   //!
//   TBranch        *b_L1_ETM60;   //!
//   TBranch        *b_L1_ETM60_Jet60_dPhi_Min0p4;   //!
//   TBranch        *b_L1_ETM70;   //!
//   TBranch        *b_L1_ETM70_Jet60_dPhi_Min0p4;   //!
//   TBranch        *b_L1_ETM80;   //!
//   TBranch        *b_L1_ETM90;   //!
//   TBranch        *b_L1_ETT25;   //!
//   TBranch        *b_L1_ETT25_BptxAND;   //!
//   TBranch        *b_L1_ETT35_BptxAND;   //!
//   TBranch        *b_L1_ETT50_BptxAND;   //!
//   TBranch        *b_L1_ETT60_BptxAND;   //!
//   TBranch        *b_L1_HTM100;   //!
//   TBranch        *b_L1_HTM120;   //!
//   TBranch        *b_L1_HTM130;   //!
//   TBranch        *b_L1_HTM140;   //!
//   TBranch        *b_L1_HTM150;   //!
//   TBranch        *b_L1_HTM50;   //!
//   TBranch        *b_L1_HTM60_HTT260;   //!
//   TBranch        *b_L1_HTM70;   //!
//   TBranch        *b_L1_HTM80;   //!
//   TBranch        *b_L1_HTM80_HTT220;   //!
//   TBranch        *b_L1_HTT120;   //!
//   TBranch        *b_L1_HTT160;   //!
//   TBranch        *b_L1_HTT200;   //!
//   TBranch        *b_L1_HTT220;   //!
//   TBranch        *b_L1_HTT240;   //!
//   TBranch        *b_L1_HTT255;   //!
//   TBranch        *b_L1_HTT270;   //!
//   TBranch        *b_L1_HTT280;   //!
//   TBranch        *b_L1_HTT300;   //!
//   TBranch        *b_L1_HTT320;   //!
//   TBranch        *b_L1_IsoEG18er_IsoTau24er_dEta_Min0p2;   //!
//   TBranch        *b_L1_IsoEG20er_IsoTau25er_dEta_Min0p2;   //!
//   TBranch        *b_L1_IsoEG22er_IsoTau26er_dEta_Min0p2;   //!
//   TBranch        *b_L1_IsoEG22er_Tau20er_dEta_Min0p2;   //!
//   TBranch        *b_L1_IsolatedBunch;   //!
//   TBranch        *b_L1_Jet32_DoubleMu_10_0_dPhi_Jet_Mu0_Max0p4_dPhi_Mu_Mu_Min1p0;   //!
//   TBranch        *b_L1_Jet32_Mu0_EG10_dPhi_Jet_Mu_Max0p4_dPhi_Mu_EG_Min1p0;   //!
//   TBranch        *b_L1_MU20_EG15;   //!
//   TBranch        *b_L1_MinimumBiasHF0_AND;   //!
//   TBranch        *b_L1_MinimumBiasHF0_AND_BptxAND;   //!
//   TBranch        *b_L1_MinimumBiasHF0_OR;   //!
//   TBranch        *b_L1_MinimumBiasHF0_OR_BptxAND;   //!
//   TBranch        *b_L1_MinimumBiasHF1_AND;   //!
//   TBranch        *b_L1_MinimumBiasHF1_AND_BptxAND;   //!
//   TBranch        *b_L1_MinimumBiasHF1_OR;   //!
//   TBranch        *b_L1_MinimumBiasHF1_OR_BptxAND;   //!
//   TBranch        *b_L1_Mu0er_ETM40;   //!
//   TBranch        *b_L1_Mu0er_ETM55;   //!
//   TBranch        *b_L1_Mu10er_ETM30;   //!
//   TBranch        *b_L1_Mu10er_ETM50;   //!
//   TBranch        *b_L1_Mu12_EG10;   //!
//   TBranch        *b_L1_Mu14er_ETM30;   //!
//   TBranch        *b_L1_Mu16er_Tau20er;   //!
//   TBranch        *b_L1_Mu16er_Tau24er;   //!
//   TBranch        *b_L1_Mu18er_IsoTau26er;   //!
//   TBranch        *b_L1_Mu18er_Tau20er;   //!
//   TBranch        *b_L1_Mu18er_Tau24er;   //!
//   TBranch        *b_L1_Mu20_EG10;   //!
//   TBranch        *b_L1_Mu20_EG17;   //!
//   TBranch        *b_L1_Mu20er_IsoTau26er;   //!
//   TBranch        *b_L1_Mu23_EG10;   //!
//   TBranch        *b_L1_Mu23_IsoEG10;   //!
//   TBranch        *b_L1_Mu3_JetC120;   //!
//   TBranch        *b_L1_Mu3_JetC120_dEta_Max0p4_dPhi_Max0p4;   //!
//   TBranch        *b_L1_Mu3_JetC16;   //!
//   TBranch        *b_L1_Mu3_JetC16_dEta_Max0p4_dPhi_Max0p4;   //!
//   TBranch        *b_L1_Mu3_JetC60;   //!
//   TBranch        *b_L1_Mu3_JetC60_dEta_Max0p4_dPhi_Max0p4;   //!
//   TBranch        *b_L1_Mu5_EG15;   //!
//   TBranch        *b_L1_Mu5_EG20;   //!
//   TBranch        *b_L1_Mu5_EG23;   //!
//   TBranch        *b_L1_Mu5_IsoEG18;   //!
//   TBranch        *b_L1_Mu5_IsoEG20;   //!
//   TBranch        *b_L1_Mu6_DoubleEG10;   //!
//   TBranch        *b_L1_Mu6_DoubleEG17;   //!
//   TBranch        *b_L1_Mu6_HTT200;   //!
//   TBranch        *b_L1_Mu8_HTT150;   //!
//   TBranch        *b_L1_NotBptxOR;   //!
//   TBranch        *b_L1_QuadJetC36_Tau52;   //!
//   TBranch        *b_L1_QuadJetC40;   //!
//   TBranch        *b_L1_QuadJetC50;   //!
//   TBranch        *b_L1_QuadJetC60;   //!
//   TBranch        *b_L1_QuadMu0;   //!
//   TBranch        *b_L1_SingleEG10;   //!
//   TBranch        *b_L1_SingleEG15;   //!
//   TBranch        *b_L1_SingleEG18;   //!
//   TBranch        *b_L1_SingleEG24;   //!
//   TBranch        *b_L1_SingleEG26;   //!
//   TBranch        *b_L1_SingleEG28;   //!
//   TBranch        *b_L1_SingleEG2_BptxAND;   //!
//   TBranch        *b_L1_SingleEG30;   //!
//   TBranch        *b_L1_SingleEG32;   //!
//   TBranch        *b_L1_SingleEG34;   //!
//   TBranch        *b_L1_SingleEG36;   //!
//   TBranch        *b_L1_SingleEG38;   //!
//   TBranch        *b_L1_SingleEG40;   //!
//   TBranch        *b_L1_SingleEG45;   //!
//   TBranch        *b_L1_SingleEG5;   //!
//   TBranch        *b_L1_SingleIsoEG18;   //!
//   TBranch        *b_L1_SingleIsoEG18er;   //!
//   TBranch        *b_L1_SingleIsoEG20;   //!
//   TBranch        *b_L1_SingleIsoEG20er;   //!
//   TBranch        *b_L1_SingleIsoEG22;   //!
//   TBranch        *b_L1_SingleIsoEG22er;   //!
//   TBranch        *b_L1_SingleIsoEG24;   //!
//   TBranch        *b_L1_SingleIsoEG24er;   //!
//   TBranch        *b_L1_SingleIsoEG26;   //!
//   TBranch        *b_L1_SingleIsoEG26er;   //!
//   TBranch        *b_L1_SingleIsoEG28;   //!
//   TBranch        *b_L1_SingleIsoEG28er;   //!
//   TBranch        *b_L1_SingleIsoEG30;   //!
//   TBranch        *b_L1_SingleIsoEG30er;   //!
//   TBranch        *b_L1_SingleIsoEG32;   //!
//   TBranch        *b_L1_SingleIsoEG32er;   //!
//   TBranch        *b_L1_SingleIsoEG34;   //!
//   TBranch        *b_L1_SingleIsoEG34er;   //!
//   TBranch        *b_L1_SingleIsoEG36;   //!
//   TBranch        *b_L1_SingleJet120;   //!
//   TBranch        *b_L1_SingleJet12_BptxAND;   //!
//   TBranch        *b_L1_SingleJet140;   //!
//   TBranch        *b_L1_SingleJet150;   //!
//   TBranch        *b_L1_SingleJet16;   //!
//   TBranch        *b_L1_SingleJet160;   //!
//   TBranch        *b_L1_SingleJet170;   //!
//   TBranch        *b_L1_SingleJet180;   //!
//   TBranch        *b_L1_SingleJet20;   //!
//   TBranch        *b_L1_SingleJet200;   //!
//   TBranch        *b_L1_SingleJet35;   //!
//   TBranch        *b_L1_SingleJet60;   //!
//   TBranch        *b_L1_SingleJet8_BptxAND;   //!
//   TBranch        *b_L1_SingleJet90;   //!
//   TBranch        *b_L1_SingleJetC20_NotBptxOR;   //!
//   TBranch        *b_L1_SingleJetC20_NotBptxOR_3BX;   //!
//   TBranch        *b_L1_SingleJetC32_NotBptxOR;   //!
//   TBranch        *b_L1_SingleJetC32_NotBptxOR_3BX;   //!
//   TBranch        *b_L1_SingleJetC36_NotBptxOR_3BX;   //!
//   TBranch        *b_L1_SingleMu10_LowQ;   //!
//   TBranch        *b_L1_SingleMu12;   //!
//   TBranch        *b_L1_SingleMu14;   //!
//   TBranch        *b_L1_SingleMu14er;   //!
//   TBranch        *b_L1_SingleMu16;   //!
//   TBranch        *b_L1_SingleMu16er;   //!
//   TBranch        *b_L1_SingleMu18;   //!
//   TBranch        *b_L1_SingleMu18er;   //!
//   TBranch        *b_L1_SingleMu20;   //!
//   TBranch        *b_L1_SingleMu20er;   //!
//   TBranch        *b_L1_SingleMu22;   //!
//   TBranch        *b_L1_SingleMu22er;   //!
//   TBranch        *b_L1_SingleMu25;   //!
//   TBranch        *b_L1_SingleMu25er;   //!
//   TBranch        *b_L1_SingleMu3;   //!
//   TBranch        *b_L1_SingleMu30;   //!
//   TBranch        *b_L1_SingleMu30er;   //!
//   TBranch        *b_L1_SingleMu5;   //!
//   TBranch        *b_L1_SingleMu7;   //!
//   TBranch        *b_L1_SingleMuCosmics;   //!
//   TBranch        *b_L1_SingleMuOpen;   //!
//   TBranch        *b_L1_SingleMuOpen_NotBptxOR;   //!
//   TBranch        *b_L1_SingleMuOpen_NotBptxOR_3BX;   //!
//   TBranch        *b_L1_SingleTau100er;   //!
//   TBranch        *b_L1_SingleTau120er;   //!
//   TBranch        *b_L1_SingleTau80er;   //!
//   TBranch        *b_L1_TripleEG_14_10_8;   //!
//   TBranch        *b_L1_TripleEG_18_17_8;   //!
//   TBranch        *b_L1_TripleJet_84_68_48_VBF;   //!
//   TBranch        *b_L1_TripleJet_88_72_56_VBF;   //!
//   TBranch        *b_L1_TripleJet_92_76_64_VBF;   //!
//   TBranch        *b_L1_TripleMu0;   //!
//   TBranch        *b_L1_TripleMu_5_5_3;   //!
//   TBranch        *b_L1_ZeroBias;   //!
//   TBranch        *b_L1_ZeroBias_FirstCollidingBunch;   //!
//   TBranch        *b_L1_ZeroBias_copy;   //!
//   TBranch        *b_HLT_Ele20_eta2p1_WPLoose_Gsf_LooseIsoPFTau28;   //!
//   TBranch        *b_HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau29;   //!
//   TBranch        *b_HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1;   //!
//   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
//   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
//   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
//   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
//   TBranch        *b_HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL;   //!
//   TBranch        *b_HLT_Rsq0p02_MR400_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200;   //!
//   TBranch        *b_HLT_Rsq0p02_MR450_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200;   //!
//   TBranch        *b_L1_DoubleEG_25_12;   //!
//   TBranch        *b_L1_DoubleIsoTau36er;   //!
//   TBranch        *b_L1_DoubleMu0er1p4_dEta_Max1p8_OS;   //!
//   TBranch        *b_L1_ETM75;   //!
//   TBranch        *b_L1_ETM75_Jet60_dPhi_Min0p4;   //!
//   TBranch        *b_L1_ETM85;   //!
//   TBranch        *b_L1_ETM95;   //!
//   TBranch        *b_L1_Mu20_IsoEG6;   //!
//   TBranch        *b_L1_Mu22er_IsoTau26er;   //!
//   TBranch        *b_L1_Mu25er_IsoTau26er;   //!
//   TBranch        *b_L1_TripleMu_5_0_0;   //!

   MET_2016F(TTree *tree=0);
   virtual ~MET_2016F();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MET_2016F_cxx
MET_2016F::MET_2016F(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("MET_2016F.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("MET_2016F.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

MET_2016F::~MET_2016F()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MET_2016F::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MET_2016F::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MET_2016F::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

//   fChain->SetBranchAddress("run", &run, &b_run);
//   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
//   fChain->SetBranchAddress("event", &event, &b_event);
//   fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
//   fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
//   fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
//   fChain->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
//   fChain->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
//   fChain->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
//   fChain->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
//   fChain->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
//   fChain->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
//   fChain->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
//   fChain->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
//   fChain->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
//   fChain->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
//   fChain->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
//   fChain->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
//   fChain->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
//   fChain->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
//   fChain->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
//   fChain->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
//   fChain->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
//   fChain->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
//   fChain->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
//   fChain->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
//   fChain->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
//   fChain->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
//   fChain->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
//   fChain->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
//   fChain->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
//   fChain->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
//   fChain->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
//   fChain->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
//   fChain->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
//   fChain->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
//   fChain->SetBranchAddress("Electron_mvaFall17V1Iso", Electron_mvaFall17V1Iso, &b_Electron_mvaFall17V1Iso);
//   fChain->SetBranchAddress("Electron_mvaFall17V1noIso", Electron_mvaFall17V1noIso, &b_Electron_mvaFall17V1noIso);
//   fChain->SetBranchAddress("Electron_mvaFall17V2Iso", Electron_mvaFall17V2Iso, &b_Electron_mvaFall17V2Iso);
//   fChain->SetBranchAddress("Electron_mvaFall17V2noIso", Electron_mvaFall17V2noIso, &b_Electron_mvaFall17V2noIso);
//   fChain->SetBranchAddress("Electron_mvaSpring16GP", Electron_mvaSpring16GP, &b_Electron_mvaSpring16GP);
//   fChain->SetBranchAddress("Electron_mvaSpring16HZZ", Electron_mvaSpring16HZZ, &b_Electron_mvaSpring16HZZ);
//   fChain->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
//   fChain->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
//   fChain->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
//   fChain->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
//   fChain->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
//   fChain->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
//   fChain->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
//   fChain->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
//   fChain->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
//   fChain->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
//   fChain->SetBranchAddress("Electron_cutBased_Fall17_V1", Electron_cutBased_Fall17_V1, &b_Electron_cutBased_Fall17_V1);
//   fChain->SetBranchAddress("Electron_cutBased_HLTPreSel", Electron_cutBased_HLTPreSel, &b_Electron_cutBased_HLTPreSel);
//   fChain->SetBranchAddress("Electron_cutBased_Spring15", Electron_cutBased_Spring15, &b_Electron_cutBased_Spring15);
//   fChain->SetBranchAddress("Electron_cutBased_Sum16", Electron_cutBased_Sum16, &b_Electron_cutBased_Sum16);
//   fChain->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
//   fChain->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
//   fChain->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
//   fChain->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
//   fChain->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
//   fChain->SetBranchAddress("Electron_vidNestedWPBitmapHEEP", Electron_vidNestedWPBitmapHEEP, &b_Electron_vidNestedWPBitmapHEEP);
//   fChain->SetBranchAddress("Electron_vidNestedWPBitmapSpring15", Electron_vidNestedWPBitmapSpring15, &b_Electron_vidNestedWPBitmapSpring15);
//   fChain->SetBranchAddress("Electron_vidNestedWPBitmapSum16", Electron_vidNestedWPBitmapSum16, &b_Electron_vidNestedWPBitmapSum16);
//   fChain->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
//   fChain->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
//   fChain->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
//   fChain->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
//   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WP80", Electron_mvaFall17V1Iso_WP80, &b_Electron_mvaFall17V1Iso_WP80);
//   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WP90", Electron_mvaFall17V1Iso_WP90, &b_Electron_mvaFall17V1Iso_WP90);
//   fChain->SetBranchAddress("Electron_mvaFall17V1Iso_WPL", Electron_mvaFall17V1Iso_WPL, &b_Electron_mvaFall17V1Iso_WPL);
//   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WP80", Electron_mvaFall17V1noIso_WP80, &b_Electron_mvaFall17V1noIso_WP80);
//   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WP90", Electron_mvaFall17V1noIso_WP90, &b_Electron_mvaFall17V1noIso_WP90);
//   fChain->SetBranchAddress("Electron_mvaFall17V1noIso_WPL", Electron_mvaFall17V1noIso_WPL, &b_Electron_mvaFall17V1noIso_WPL);
//   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP80", Electron_mvaFall17V2Iso_WP80, &b_Electron_mvaFall17V2Iso_WP80);
//   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WP90", Electron_mvaFall17V2Iso_WP90, &b_Electron_mvaFall17V2Iso_WP90);
//   fChain->SetBranchAddress("Electron_mvaFall17V2Iso_WPL", Electron_mvaFall17V2Iso_WPL, &b_Electron_mvaFall17V2Iso_WPL);
//   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP80", Electron_mvaFall17V2noIso_WP80, &b_Electron_mvaFall17V2noIso_WP80);
//   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WP90", Electron_mvaFall17V2noIso_WP90, &b_Electron_mvaFall17V2noIso_WP90);
//   fChain->SetBranchAddress("Electron_mvaFall17V2noIso_WPL", Electron_mvaFall17V2noIso_WPL, &b_Electron_mvaFall17V2noIso_WPL);
//   fChain->SetBranchAddress("Electron_mvaSpring16GP_WP80", Electron_mvaSpring16GP_WP80, &b_Electron_mvaSpring16GP_WP80);
//   fChain->SetBranchAddress("Electron_mvaSpring16GP_WP90", Electron_mvaSpring16GP_WP90, &b_Electron_mvaSpring16GP_WP90);
//   fChain->SetBranchAddress("Electron_mvaSpring16HZZ_WPL", Electron_mvaSpring16HZZ_WPL, &b_Electron_mvaSpring16HZZ_WPL);
//   fChain->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
//   fChain->SetBranchAddress("nFatJet", &nFatJet, &b_nFatJet);
//   fChain->SetBranchAddress("FatJet_area", FatJet_area, &b_FatJet_area);
//   fChain->SetBranchAddress("FatJet_btagCMVA", FatJet_btagCMVA, &b_FatJet_btagCMVA);
//   fChain->SetBranchAddress("FatJet_btagCSVV2", FatJet_btagCSVV2, &b_FatJet_btagCSVV2);
//   fChain->SetBranchAddress("FatJet_btagDDBvL", FatJet_btagDDBvL, &b_FatJet_btagDDBvL);
//   fChain->SetBranchAddress("FatJet_btagDDBvL_noMD", FatJet_btagDDBvL_noMD, &b_FatJet_btagDDBvL_noMD);
//   fChain->SetBranchAddress("FatJet_btagDDCvB", FatJet_btagDDCvB, &b_FatJet_btagDDCvB);
//   fChain->SetBranchAddress("FatJet_btagDDCvB_noMD", FatJet_btagDDCvB_noMD, &b_FatJet_btagDDCvB_noMD);
//   fChain->SetBranchAddress("FatJet_btagDDCvL", FatJet_btagDDCvL, &b_FatJet_btagDDCvL);
//   fChain->SetBranchAddress("FatJet_btagDDCvL_noMD", FatJet_btagDDCvL_noMD, &b_FatJet_btagDDCvL_noMD);
//   fChain->SetBranchAddress("FatJet_btagDeepB", FatJet_btagDeepB, &b_FatJet_btagDeepB);
//   fChain->SetBranchAddress("FatJet_btagHbb", FatJet_btagHbb, &b_FatJet_btagHbb);
//   fChain->SetBranchAddress("FatJet_deepTagMD_H4qvsQCD", FatJet_deepTagMD_H4qvsQCD, &b_FatJet_deepTagMD_H4qvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD", FatJet_deepTagMD_HbbvsQCD, &b_FatJet_deepTagMD_HbbvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_TvsQCD", FatJet_deepTagMD_TvsQCD, &b_FatJet_deepTagMD_TvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_WvsQCD", FatJet_deepTagMD_WvsQCD, &b_FatJet_deepTagMD_WvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_ZHbbvsQCD", FatJet_deepTagMD_ZHbbvsQCD, &b_FatJet_deepTagMD_ZHbbvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_ZHccvsQCD", FatJet_deepTagMD_ZHccvsQCD, &b_FatJet_deepTagMD_ZHccvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_ZbbvsQCD", FatJet_deepTagMD_ZbbvsQCD, &b_FatJet_deepTagMD_ZbbvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_ZvsQCD", FatJet_deepTagMD_ZvsQCD, &b_FatJet_deepTagMD_ZvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTagMD_bbvsLight", FatJet_deepTagMD_bbvsLight, &b_FatJet_deepTagMD_bbvsLight);
//   fChain->SetBranchAddress("FatJet_deepTagMD_ccvsLight", FatJet_deepTagMD_ccvsLight, &b_FatJet_deepTagMD_ccvsLight);
//   fChain->SetBranchAddress("FatJet_deepTag_H", FatJet_deepTag_H, &b_FatJet_deepTag_H);
//   fChain->SetBranchAddress("FatJet_deepTag_QCD", FatJet_deepTag_QCD, &b_FatJet_deepTag_QCD);
//   fChain->SetBranchAddress("FatJet_deepTag_QCDothers", FatJet_deepTag_QCDothers, &b_FatJet_deepTag_QCDothers);
//   fChain->SetBranchAddress("FatJet_deepTag_TvsQCD", FatJet_deepTag_TvsQCD, &b_FatJet_deepTag_TvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTag_WvsQCD", FatJet_deepTag_WvsQCD, &b_FatJet_deepTag_WvsQCD);
//   fChain->SetBranchAddress("FatJet_deepTag_ZvsQCD", FatJet_deepTag_ZvsQCD, &b_FatJet_deepTag_ZvsQCD);
//   fChain->SetBranchAddress("FatJet_eta", FatJet_eta, &b_FatJet_eta);
//   fChain->SetBranchAddress("FatJet_mass", FatJet_mass, &b_FatJet_mass);
//   fChain->SetBranchAddress("FatJet_msoftdrop", FatJet_msoftdrop, &b_FatJet_msoftdrop);
//   fChain->SetBranchAddress("FatJet_n2b1", FatJet_n2b1, &b_FatJet_n2b1);
//   fChain->SetBranchAddress("FatJet_n3b1", FatJet_n3b1, &b_FatJet_n3b1);
//   fChain->SetBranchAddress("FatJet_phi", FatJet_phi, &b_FatJet_phi);
//   fChain->SetBranchAddress("FatJet_pt", FatJet_pt, &b_FatJet_pt);
//   fChain->SetBranchAddress("FatJet_rawFactor", FatJet_rawFactor, &b_FatJet_rawFactor);
//   fChain->SetBranchAddress("FatJet_tau1", FatJet_tau1, &b_FatJet_tau1);
//   fChain->SetBranchAddress("FatJet_tau2", FatJet_tau2, &b_FatJet_tau2);
//   fChain->SetBranchAddress("FatJet_tau3", FatJet_tau3, &b_FatJet_tau3);
//   fChain->SetBranchAddress("FatJet_tau4", FatJet_tau4, &b_FatJet_tau4);
//   fChain->SetBranchAddress("FatJet_jetId", FatJet_jetId, &b_FatJet_jetId);
//   fChain->SetBranchAddress("FatJet_subJetIdx1", FatJet_subJetIdx1, &b_FatJet_subJetIdx1);
//   fChain->SetBranchAddress("FatJet_subJetIdx2", FatJet_subJetIdx2, &b_FatJet_subJetIdx2);
//   fChain->SetBranchAddress("nFsrPhoton", &nFsrPhoton, &b_nFsrPhoton);
//   fChain->SetBranchAddress("FsrPhoton_dROverEt2", FsrPhoton_dROverEt2, &b_FsrPhoton_dROverEt2);
//   fChain->SetBranchAddress("FsrPhoton_eta", FsrPhoton_eta, &b_FsrPhoton_eta);
//   fChain->SetBranchAddress("FsrPhoton_phi", FsrPhoton_phi, &b_FsrPhoton_phi);
//   fChain->SetBranchAddress("FsrPhoton_pt", FsrPhoton_pt, &b_FsrPhoton_pt);
//   fChain->SetBranchAddress("FsrPhoton_relIso03", FsrPhoton_relIso03, &b_FsrPhoton_relIso03);
//   fChain->SetBranchAddress("FsrPhoton_muonIdx", FsrPhoton_muonIdx, &b_FsrPhoton_muonIdx);
//   fChain->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
//   fChain->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
//   fChain->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
//   fChain->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
//   fChain->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
//   fChain->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
//   fChain->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
//   fChain->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
//   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
//   fChain->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
//   fChain->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
//   fChain->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
//   fChain->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
//   fChain->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
//   fChain->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
//   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
//   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
//   fChain->SetBranchAddress("Jet_btagCMVA", Jet_btagCMVA, &b_Jet_btagCMVA);
//   fChain->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
//   fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
//   fChain->SetBranchAddress("Jet_btagDeepC", Jet_btagDeepC, &b_Jet_btagDeepC);
//   fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
//   fChain->SetBranchAddress("Jet_btagDeepFlavC", Jet_btagDeepFlavC, &b_Jet_btagDeepFlavC);
//   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
//   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
//   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
//   fChain->SetBranchAddress("Jet_jercCHF", Jet_jercCHF, &b_Jet_jercCHF);
//   fChain->SetBranchAddress("Jet_jercCHPUF", Jet_jercCHPUF, &b_Jet_jercCHPUF);
//   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
//   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
//   fChain->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
//   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
//   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
//   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
//   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
//   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
//   fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
//   fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
//   fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
//   fChain->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
//   fChain->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
//   fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
//   fChain->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
//   fChain->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
//   fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
//   fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
//   fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
//   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
//   fChain->SetBranchAddress("L1PreFiringWeight_Dn", &L1PreFiringWeight_Dn, &b_L1PreFiringWeight_Dn);
//   fChain->SetBranchAddress("L1PreFiringWeight_Nom", &L1PreFiringWeight_Nom, &b_L1PreFiringWeight_Nom);
//   fChain->SetBranchAddress("L1PreFiringWeight_Up", &L1PreFiringWeight_Up, &b_L1PreFiringWeight_Up);
//   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
//   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
//   fChain->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
//   fChain->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
//   fChain->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
//   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
//   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
//   fChain->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
//   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
//   fChain->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
//   fChain->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
//   fChain->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
//   fChain->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
//   fChain->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
//   fChain->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
//   fChain->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
//   fChain->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
//   fChain->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
//   fChain->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
//   fChain->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
//   fChain->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
//   fChain->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
//   fChain->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
//   fChain->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
//   fChain->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
//   fChain->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
//   fChain->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
//   fChain->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
//   fChain->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
//   fChain->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
//   fChain->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
//   fChain->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
//   fChain->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
//   fChain->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
//   fChain->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
//   fChain->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
//   fChain->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
//   fChain->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
//   fChain->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
//   fChain->SetBranchAddress("Muon_fsrPhotonIdx", Muon_fsrPhotonIdx, &b_Muon_fsrPhotonIdx);
//   fChain->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
//   fChain->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
//   fChain->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
//   fChain->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
//   fChain->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
//   fChain->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
//   fChain->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
//   fChain->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
//   fChain->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
//   fChain->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
//   fChain->SetBranchAddress("Muon_mvaId", Muon_mvaId, &b_Muon_mvaId);
//   fChain->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
//   fChain->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
//   fChain->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
//   fChain->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
//   fChain->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
//   fChain->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
//   fChain->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
//   fChain->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
//   fChain->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
//   fChain->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
//   fChain->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
//   fChain->SetBranchAddress("Photon_mass", Photon_mass, &b_Photon_mass);
//   fChain->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
//   fChain->SetBranchAddress("Photon_mvaID17", Photon_mvaID17, &b_Photon_mvaID17);
//   fChain->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
//   fChain->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
//   fChain->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
//   fChain->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
//   fChain->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
//   fChain->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
//   fChain->SetBranchAddress("Photon_charge", Photon_charge, &b_Photon_charge);
//   fChain->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
//   fChain->SetBranchAddress("Photon_cutBased17Bitmap", Photon_cutBased17Bitmap, &b_Photon_cutBased17Bitmap);
//   fChain->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
//   fChain->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
//   fChain->SetBranchAddress("Photon_pdgId", Photon_pdgId, &b_Photon_pdgId);
//   fChain->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
//   fChain->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
//   fChain->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
//   fChain->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
//   fChain->SetBranchAddress("Photon_mvaID17_WP80", Photon_mvaID17_WP80, &b_Photon_mvaID17_WP80);
//   fChain->SetBranchAddress("Photon_mvaID17_WP90", Photon_mvaID17_WP90, &b_Photon_mvaID17_WP90);
//   fChain->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
//   fChain->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
//   fChain->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
//   fChain->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
//   fChain->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
//   fChain->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
//   fChain->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
//   fChain->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
//   fChain->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
//   fChain->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
//   fChain->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll, &b_fixedGridRhoFastjetAll);
//   fChain->SetBranchAddress("fixedGridRhoFastjetCentral", &fixedGridRhoFastjetCentral, &b_fixedGridRhoFastjetCentral);
//   fChain->SetBranchAddress("fixedGridRhoFastjetCentralCalo", &fixedGridRhoFastjetCentralCalo, &b_fixedGridRhoFastjetCentralCalo);
//   fChain->SetBranchAddress("fixedGridRhoFastjetCentralChargedPileUp", &fixedGridRhoFastjetCentralChargedPileUp, &b_fixedGridRhoFastjetCentralChargedPileUp);
//   fChain->SetBranchAddress("fixedGridRhoFastjetCentralNeutral", &fixedGridRhoFastjetCentralNeutral, &b_fixedGridRhoFastjetCentralNeutral);
//   fChain->SetBranchAddress("nSoftActivityJet", &nSoftActivityJet, &b_nSoftActivityJet);
//   fChain->SetBranchAddress("SoftActivityJet_eta", SoftActivityJet_eta, &b_SoftActivityJet_eta);
//   fChain->SetBranchAddress("SoftActivityJet_phi", SoftActivityJet_phi, &b_SoftActivityJet_phi);
//   fChain->SetBranchAddress("SoftActivityJet_pt", SoftActivityJet_pt, &b_SoftActivityJet_pt);
//   fChain->SetBranchAddress("SoftActivityJetHT", &SoftActivityJetHT, &b_SoftActivityJetHT);
//   fChain->SetBranchAddress("SoftActivityJetHT10", &SoftActivityJetHT10, &b_SoftActivityJetHT10);
//   fChain->SetBranchAddress("SoftActivityJetHT2", &SoftActivityJetHT2, &b_SoftActivityJetHT2);
//   fChain->SetBranchAddress("SoftActivityJetHT5", &SoftActivityJetHT5, &b_SoftActivityJetHT5);
//   fChain->SetBranchAddress("SoftActivityJetNjets10", &SoftActivityJetNjets10, &b_SoftActivityJetNjets10);
//   fChain->SetBranchAddress("SoftActivityJetNjets2", &SoftActivityJetNjets2, &b_SoftActivityJetNjets2);
//   fChain->SetBranchAddress("SoftActivityJetNjets5", &SoftActivityJetNjets5, &b_SoftActivityJetNjets5);
//   fChain->SetBranchAddress("nSubJet", &nSubJet, &b_nSubJet);
//   fChain->SetBranchAddress("SubJet_btagCMVA", SubJet_btagCMVA, &b_SubJet_btagCMVA);
//   fChain->SetBranchAddress("SubJet_btagCSVV2", SubJet_btagCSVV2, &b_SubJet_btagCSVV2);
//   fChain->SetBranchAddress("SubJet_btagDeepB", SubJet_btagDeepB, &b_SubJet_btagDeepB);
//   fChain->SetBranchAddress("SubJet_eta", SubJet_eta, &b_SubJet_eta);
//   fChain->SetBranchAddress("SubJet_mass", SubJet_mass, &b_SubJet_mass);
//   fChain->SetBranchAddress("SubJet_n2b1", SubJet_n2b1, &b_SubJet_n2b1);
//   fChain->SetBranchAddress("SubJet_n3b1", SubJet_n3b1, &b_SubJet_n3b1);
//   fChain->SetBranchAddress("SubJet_phi", SubJet_phi, &b_SubJet_phi);
//   fChain->SetBranchAddress("SubJet_pt", SubJet_pt, &b_SubJet_pt);
//   fChain->SetBranchAddress("SubJet_rawFactor", SubJet_rawFactor, &b_SubJet_rawFactor);
//   fChain->SetBranchAddress("SubJet_tau1", SubJet_tau1, &b_SubJet_tau1);
//   fChain->SetBranchAddress("SubJet_tau2", SubJet_tau2, &b_SubJet_tau2);
//   fChain->SetBranchAddress("SubJet_tau3", SubJet_tau3, &b_SubJet_tau3);
//   fChain->SetBranchAddress("SubJet_tau4", SubJet_tau4, &b_SubJet_tau4);
//   fChain->SetBranchAddress("nTau", &nTau, &b_nTau);
//   fChain->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
//   fChain->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
//   fChain->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
//   fChain->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
//   fChain->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
//   fChain->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
//   fChain->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
//   fChain->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
//   fChain->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
//   fChain->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
//   fChain->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
//   fChain->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
//   fChain->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
//   fChain->SetBranchAddress("Tau_rawAntiEle", Tau_rawAntiEle, &b_Tau_rawAntiEle);
//   fChain->SetBranchAddress("Tau_rawAntiEle2018", Tau_rawAntiEle2018, &b_Tau_rawAntiEle2018);
//   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSe", Tau_rawDeepTau2017v2p1VSe, &b_Tau_rawDeepTau2017v2p1VSe);
//   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSjet", Tau_rawDeepTau2017v2p1VSjet, &b_Tau_rawDeepTau2017v2p1VSjet);
//   fChain->SetBranchAddress("Tau_rawDeepTau2017v2p1VSmu", Tau_rawDeepTau2017v2p1VSmu, &b_Tau_rawDeepTau2017v2p1VSmu);
//   fChain->SetBranchAddress("Tau_rawIso", Tau_rawIso, &b_Tau_rawIso);
//   fChain->SetBranchAddress("Tau_rawIsodR03", Tau_rawIsodR03, &b_Tau_rawIsodR03);
//   fChain->SetBranchAddress("Tau_rawMVAnewDM2017v2", Tau_rawMVAnewDM2017v2, &b_Tau_rawMVAnewDM2017v2);
//   fChain->SetBranchAddress("Tau_rawMVAoldDM", Tau_rawMVAoldDM, &b_Tau_rawMVAoldDM);
//   fChain->SetBranchAddress("Tau_rawMVAoldDM2017v1", Tau_rawMVAoldDM2017v1, &b_Tau_rawMVAoldDM2017v1);
//   fChain->SetBranchAddress("Tau_rawMVAoldDM2017v2", Tau_rawMVAoldDM2017v2, &b_Tau_rawMVAoldDM2017v2);
//   fChain->SetBranchAddress("Tau_rawMVAoldDMdR032017v2", Tau_rawMVAoldDMdR032017v2, &b_Tau_rawMVAoldDMdR032017v2);
//   fChain->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
//   fChain->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
//   fChain->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
//   fChain->SetBranchAddress("Tau_rawAntiEleCat", Tau_rawAntiEleCat, &b_Tau_rawAntiEleCat);
//   fChain->SetBranchAddress("Tau_rawAntiEleCat2018", Tau_rawAntiEleCat2018, &b_Tau_rawAntiEleCat2018);
//   fChain->SetBranchAddress("Tau_idAntiEle", Tau_idAntiEle, &b_Tau_idAntiEle);
//   fChain->SetBranchAddress("Tau_idAntiEle2018", Tau_idAntiEle2018, &b_Tau_idAntiEle2018);
//   fChain->SetBranchAddress("Tau_idAntiMu", Tau_idAntiMu, &b_Tau_idAntiMu);
//   fChain->SetBranchAddress("Tau_idDecayMode", Tau_idDecayMode, &b_Tau_idDecayMode);
//   fChain->SetBranchAddress("Tau_idDecayModeNewDMs", Tau_idDecayModeNewDMs, &b_Tau_idDecayModeNewDMs);
//   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
//   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
//   fChain->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
//   fChain->SetBranchAddress("Tau_idMVAnewDM2017v2", Tau_idMVAnewDM2017v2, &b_Tau_idMVAnewDM2017v2);
//   fChain->SetBranchAddress("Tau_idMVAoldDM", Tau_idMVAoldDM, &b_Tau_idMVAoldDM);
//   fChain->SetBranchAddress("Tau_idMVAoldDM2017v1", Tau_idMVAoldDM2017v1, &b_Tau_idMVAoldDM2017v1);
//   fChain->SetBranchAddress("Tau_idMVAoldDM2017v2", Tau_idMVAoldDM2017v2, &b_Tau_idMVAoldDM2017v2);
//   fChain->SetBranchAddress("Tau_idMVAoldDMdR032017v2", Tau_idMVAoldDMdR032017v2, &b_Tau_idMVAoldDMdR032017v2);
//   fChain->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
//   fChain->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
//   fChain->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
//   fChain->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
//   fChain->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
//   fChain->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
//   fChain->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
//   fChain->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
//   fChain->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
//   fChain->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
//   fChain->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
//   fChain->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
//   fChain->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
//   fChain->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
//   fChain->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
//   fChain->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
//   fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
//   fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
//   fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
//   fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
//   fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
//   fChain->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
//   fChain->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
//   fChain->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
//   fChain->SetBranchAddress("nSV", &nSV, &b_nSV);
//   fChain->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
//   fChain->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
//   fChain->SetBranchAddress("SV_dxy", SV_dxy, &b_SV_dxy);
//   fChain->SetBranchAddress("SV_dxySig", SV_dxySig, &b_SV_dxySig);
//   fChain->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
//   fChain->SetBranchAddress("Electron_cleanmask", Electron_cleanmask, &b_Electron_cleanmask);
//   fChain->SetBranchAddress("Jet_cleanmask", Jet_cleanmask, &b_Jet_cleanmask);
//   fChain->SetBranchAddress("Muon_cleanmask", Muon_cleanmask, &b_Muon_cleanmask);
//   fChain->SetBranchAddress("Photon_cleanmask", Photon_cleanmask, &b_Photon_cleanmask);
//   fChain->SetBranchAddress("Tau_cleanmask", Tau_cleanmask, &b_Tau_cleanmask);
//   fChain->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
//   fChain->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
//   fChain->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
//   fChain->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
//   fChain->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
//   fChain->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
//   fChain->SetBranchAddress("SV_x", SV_x, &b_SV_x);
//   fChain->SetBranchAddress("SV_y", SV_y, &b_SV_y);
//   fChain->SetBranchAddress("SV_z", SV_z, &b_SV_z);
//   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
//   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
//   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
//   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
//   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
//   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
//   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
//   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
//   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
//   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
//   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
//   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
//   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
//   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
//   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
//   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
//   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
//   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
//   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
//   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
//   fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
//   fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
//   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
//   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
//   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
//   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
//   fChain->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
//   fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
//   fChain->SetBranchAddress("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50", &HLT_AK8PFHT700_TrimR0p1PT0p03Mass50, &b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50);
//   fChain->SetBranchAddress("HLT_AK8PFHT650_TrimR0p1PT0p03Mass50", &HLT_AK8PFHT650_TrimR0p1PT0p03Mass50, &b_HLT_AK8PFHT650_TrimR0p1PT0p03Mass50);
//   fChain->SetBranchAddress("HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20", &HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20, &b_HLT_AK8PFHT600_TrimR0p1PT0p03Mass50_BTagCSV_p20);
//   fChain->SetBranchAddress("HLT_CaloJet500_NoJetID", &HLT_CaloJet500_NoJetID, &b_HLT_CaloJet500_NoJetID);
//   fChain->SetBranchAddress("HLT_Dimuon13_PsiPrime", &HLT_Dimuon13_PsiPrime, &b_HLT_Dimuon13_PsiPrime);
//   fChain->SetBranchAddress("HLT_Dimuon13_Upsilon", &HLT_Dimuon13_Upsilon, &b_HLT_Dimuon13_Upsilon);
//   fChain->SetBranchAddress("HLT_Dimuon20_Jpsi", &HLT_Dimuon20_Jpsi, &b_HLT_Dimuon20_Jpsi);
//   fChain->SetBranchAddress("HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf", &HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf, &b_HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL", &HLT_DoubleEle33_CaloIdL, &b_HLT_DoubleEle33_CaloIdL);
//   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_MW", &HLT_DoubleEle33_CaloIdL_MW, &b_HLT_DoubleEle33_CaloIdL_MW);
//   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW", &HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW, &b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW);
//   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_GsfTrkIdVL", &HLT_DoubleEle33_CaloIdL_GsfTrkIdVL, &b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_DoubleEle37_Ele27_CaloIdL_GsfTrkIdVL", &HLT_DoubleEle37_Ele27_CaloIdL_GsfTrkIdVL, &b_HLT_DoubleEle37_Ele27_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg", &HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg", &HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg", &HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_DoubleMu33NoFiltersNoVtx", &HLT_DoubleMu33NoFiltersNoVtx, &b_HLT_DoubleMu33NoFiltersNoVtx);
//   fChain->SetBranchAddress("HLT_DoubleMu38NoFiltersNoVtx", &HLT_DoubleMu38NoFiltersNoVtx, &b_HLT_DoubleMu38NoFiltersNoVtx);
//   fChain->SetBranchAddress("HLT_DoubleMu23NoFiltersNoVtxDisplaced", &HLT_DoubleMu23NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu23NoFiltersNoVtxDisplaced);
//   fChain->SetBranchAddress("HLT_DoubleMu28NoFiltersNoVtxDisplaced", &HLT_DoubleMu28NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu28NoFiltersNoVtxDisplaced);
//   fChain->SetBranchAddress("HLT_DoubleMu4_3_Bs", &HLT_DoubleMu4_3_Bs, &b_HLT_DoubleMu4_3_Bs);
//   fChain->SetBranchAddress("HLT_DoubleMu4_3_Jpsi_Displaced", &HLT_DoubleMu4_3_Jpsi_Displaced, &b_HLT_DoubleMu4_3_Jpsi_Displaced);
//   fChain->SetBranchAddress("HLT_DoubleMu4_JpsiTrk_Displaced", &HLT_DoubleMu4_JpsiTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrk_Displaced);
//   fChain->SetBranchAddress("HLT_DoubleMu4_LowMassNonResonantTrk_Displaced", &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced, &b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced);
//   fChain->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu", &HLT_DoubleMu3_Trk_Tau3mu, &b_HLT_DoubleMu3_Trk_Tau3mu);
//   fChain->SetBranchAddress("HLT_DoubleMu4_PsiPrimeTrk_Displaced", &HLT_DoubleMu4_PsiPrimeTrk_Displaced, &b_HLT_DoubleMu4_PsiPrimeTrk_Displaced);
//   fChain->SetBranchAddress("HLT_Mu7p5_L2Mu2_Jpsi", &HLT_Mu7p5_L2Mu2_Jpsi, &b_HLT_Mu7p5_L2Mu2_Jpsi);
//   fChain->SetBranchAddress("HLT_Mu7p5_L2Mu2_Upsilon", &HLT_Mu7p5_L2Mu2_Upsilon, &b_HLT_Mu7p5_L2Mu2_Upsilon);
//   fChain->SetBranchAddress("HLT_Mu7p5_Track2_Jpsi", &HLT_Mu7p5_Track2_Jpsi, &b_HLT_Mu7p5_Track2_Jpsi);
//   fChain->SetBranchAddress("HLT_Mu7p5_Track3p5_Jpsi", &HLT_Mu7p5_Track3p5_Jpsi, &b_HLT_Mu7p5_Track3p5_Jpsi);
//   fChain->SetBranchAddress("HLT_Mu7p5_Track7_Jpsi", &HLT_Mu7p5_Track7_Jpsi, &b_HLT_Mu7p5_Track7_Jpsi);
//   fChain->SetBranchAddress("HLT_Mu7p5_Track2_Upsilon", &HLT_Mu7p5_Track2_Upsilon, &b_HLT_Mu7p5_Track2_Upsilon);
//   fChain->SetBranchAddress("HLT_Mu7p5_Track3p5_Upsilon", &HLT_Mu7p5_Track3p5_Upsilon, &b_HLT_Mu7p5_Track3p5_Upsilon);
//   fChain->SetBranchAddress("HLT_Mu7p5_Track7_Upsilon", &HLT_Mu7p5_Track7_Upsilon, &b_HLT_Mu7p5_Track7_Upsilon);
//   fChain->SetBranchAddress("HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing", &HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing, &b_HLT_Dimuon0er16_Jpsi_NoOS_NoVertexing);
//   fChain->SetBranchAddress("HLT_Dimuon0er16_Jpsi_NoVertexing", &HLT_Dimuon0er16_Jpsi_NoVertexing, &b_HLT_Dimuon0er16_Jpsi_NoVertexing);
//   fChain->SetBranchAddress("HLT_Dimuon6_Jpsi_NoVertexing", &HLT_Dimuon6_Jpsi_NoVertexing, &b_HLT_Dimuon6_Jpsi_NoVertexing);
//   fChain->SetBranchAddress("HLT_DoublePhoton60", &HLT_DoublePhoton60, &b_HLT_DoublePhoton60);
//   fChain->SetBranchAddress("HLT_DoublePhoton85", &HLT_DoublePhoton85, &b_HLT_DoublePhoton85);
//   fChain->SetBranchAddress("HLT_Ele22_eta2p1_WPLoose_Gsf", &HLT_Ele22_eta2p1_WPLoose_Gsf, &b_HLT_Ele22_eta2p1_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1", &HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1, &b_HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_Ele23_WPLoose_Gsf", &HLT_Ele23_WPLoose_Gsf, &b_HLT_Ele23_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele23_WPLoose_Gsf_WHbbBoost", &HLT_Ele23_WPLoose_Gsf_WHbbBoost, &b_HLT_Ele23_WPLoose_Gsf_WHbbBoost);
//   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPLoose_Gsf", &HLT_Ele24_eta2p1_WPLoose_Gsf, &b_HLT_Ele24_eta2p1_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20", &HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20, &b_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20);
//   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1", &HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1, &b_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30", &HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30, &b_HLT_Ele24_eta2p1_WPLoose_Gsf_LooseIsoPFTau30);
//   fChain->SetBranchAddress("HLT_Ele25_WPTight_Gsf", &HLT_Ele25_WPTight_Gsf, &b_HLT_Ele25_WPTight_Gsf);
//   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPLoose_Gsf", &HLT_Ele25_eta2p1_WPLoose_Gsf, &b_HLT_Ele25_eta2p1_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPTight_Gsf", &HLT_Ele25_eta2p1_WPTight_Gsf, &b_HLT_Ele25_eta2p1_WPTight_Gsf);
//   fChain->SetBranchAddress("HLT_Ele27_WPLoose_Gsf", &HLT_Ele27_WPLoose_Gsf, &b_HLT_Ele27_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele27_WPLoose_Gsf_WHbbBoost", &HLT_Ele27_WPLoose_Gsf_WHbbBoost, &b_HLT_Ele27_WPLoose_Gsf_WHbbBoost);
//   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
//   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf_L1JetTauSeeded", &HLT_Ele27_WPTight_Gsf_L1JetTauSeeded, &b_HLT_Ele27_WPTight_Gsf_L1JetTauSeeded);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf", &HLT_Ele27_eta2p1_WPLoose_Gsf, &b_HLT_Ele27_eta2p1_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1", &HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1, &b_HLT_Ele27_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg", &HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg, &b_HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau32_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg", &HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg, &b_HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau35_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg", &HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg, &b_HLT_Ele27_eta2p1_WPLoose_Gsf_DoubleMediumIsoPFTau40_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPTight_Gsf", &HLT_Ele27_eta2p1_WPTight_Gsf, &b_HLT_Ele27_eta2p1_WPTight_Gsf);
//   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1", &HLT_Ele32_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1, &b_HLT_Ele32_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_Ele32_eta2p1_WPTight_Gsf", &HLT_Ele32_eta2p1_WPTight_Gsf, &b_HLT_Ele32_eta2p1_WPTight_Gsf);
//   fChain->SetBranchAddress("HLT_Ele35_WPLoose_Gsf", &HLT_Ele35_WPLoose_Gsf, &b_HLT_Ele35_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50", &HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50, &b_HLT_Ele35_CaloIdVT_GsfTrkIdT_PFJet150_PFJet50);
//   fChain->SetBranchAddress("HLT_Ele45_WPLoose_Gsf", &HLT_Ele45_WPLoose_Gsf, &b_HLT_Ele45_WPLoose_Gsf);
//   fChain->SetBranchAddress("HLT_Ele45_WPLoose_Gsf_L1JetTauSeeded", &HLT_Ele45_WPLoose_Gsf_L1JetTauSeeded, &b_HLT_Ele45_WPLoose_Gsf_L1JetTauSeeded);
//   fChain->SetBranchAddress("HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50", &HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50, &b_HLT_Ele45_CaloIdVT_GsfTrkIdT_PFJet200_PFJet50);
//   fChain->SetBranchAddress("HLT_Ele105_CaloIdVT_GsfTrkIdT", &HLT_Ele105_CaloIdVT_GsfTrkIdT, &b_HLT_Ele105_CaloIdVT_GsfTrkIdT);
//   fChain->SetBranchAddress("HLT_Ele30WP60_SC4_Mass55", &HLT_Ele30WP60_SC4_Mass55, &b_HLT_Ele30WP60_SC4_Mass55);
//   fChain->SetBranchAddress("HLT_Ele30WP60_Ele8_Mass55", &HLT_Ele30WP60_Ele8_Mass55, &b_HLT_Ele30WP60_Ele8_Mass55);
//   fChain->SetBranchAddress("HLT_HT200", &HLT_HT200, &b_HLT_HT200);
//   fChain->SetBranchAddress("HLT_HT275", &HLT_HT275, &b_HLT_HT275);
//   fChain->SetBranchAddress("HLT_HT325", &HLT_HT325, &b_HLT_HT325);
//   fChain->SetBranchAddress("HLT_HT425", &HLT_HT425, &b_HLT_HT425);
//   fChain->SetBranchAddress("HLT_HT575", &HLT_HT575, &b_HLT_HT575);
//   fChain->SetBranchAddress("HLT_HT410to430", &HLT_HT410to430, &b_HLT_HT410to430);
//   fChain->SetBranchAddress("HLT_HT430to450", &HLT_HT430to450, &b_HLT_HT430to450);
//   fChain->SetBranchAddress("HLT_HT450to470", &HLT_HT450to470, &b_HLT_HT450to470);
//   fChain->SetBranchAddress("HLT_HT470to500", &HLT_HT470to500, &b_HLT_HT470to500);
//   fChain->SetBranchAddress("HLT_HT500to550", &HLT_HT500to550, &b_HLT_HT500to550);
//   fChain->SetBranchAddress("HLT_HT550to650", &HLT_HT550to650, &b_HLT_HT550to650);
//   fChain->SetBranchAddress("HLT_HT650", &HLT_HT650, &b_HLT_HT650);
//   fChain->SetBranchAddress("HLT_Mu16_eta2p1_MET30", &HLT_Mu16_eta2p1_MET30, &b_HLT_Mu16_eta2p1_MET30);
//   fChain->SetBranchAddress("HLT_IsoMu16_eta2p1_MET30", &HLT_IsoMu16_eta2p1_MET30, &b_HLT_IsoMu16_eta2p1_MET30);
//   fChain->SetBranchAddress("HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1", &HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1, &b_HLT_IsoMu16_eta2p1_MET30_LooseIsoPFTau50_Trk30_eta2p1);
//   fChain->SetBranchAddress("HLT_IsoMu17_eta2p1_LooseIsoPFTau20", &HLT_IsoMu17_eta2p1_LooseIsoPFTau20, &b_HLT_IsoMu17_eta2p1_LooseIsoPFTau20);
//   fChain->SetBranchAddress("HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1", &HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1, &b_HLT_IsoMu17_eta2p1_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_DoubleIsoMu17_eta2p1", &HLT_DoubleIsoMu17_eta2p1, &b_HLT_DoubleIsoMu17_eta2p1);
//   fChain->SetBranchAddress("HLT_DoubleIsoMu17_eta2p1_noDzCut", &HLT_DoubleIsoMu17_eta2p1_noDzCut, &b_HLT_DoubleIsoMu17_eta2p1_noDzCut);
//   fChain->SetBranchAddress("HLT_IsoMu18", &HLT_IsoMu18, &b_HLT_IsoMu18);
//   fChain->SetBranchAddress("HLT_IsoMu19_eta2p1_LooseIsoPFTau20", &HLT_IsoMu19_eta2p1_LooseIsoPFTau20, &b_HLT_IsoMu19_eta2p1_LooseIsoPFTau20);
//   fChain->SetBranchAddress("HLT_IsoMu19_eta2p1_LooseIsoPFTau20_SingleL1", &HLT_IsoMu19_eta2p1_LooseIsoPFTau20_SingleL1, &b_HLT_IsoMu19_eta2p1_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_IsoMu19_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg", &HLT_IsoMu19_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg, &b_HLT_IsoMu19_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
//   fChain->SetBranchAddress("HLT_IsoMu21_eta2p1_LooseIsoPFTau20_SingleL1", &HLT_IsoMu21_eta2p1_LooseIsoPFTau20_SingleL1, &b_HLT_IsoMu21_eta2p1_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_IsoMu21_eta2p1_LooseIsoPFTau50_Trk30_eta2p1_SingleL1", &HLT_IsoMu21_eta2p1_LooseIsoPFTau50_Trk30_eta2p1_SingleL1, &b_HLT_IsoMu21_eta2p1_LooseIsoPFTau50_Trk30_eta2p1_SingleL1);
//   fChain->SetBranchAddress("HLT_IsoMu21_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg", &HLT_IsoMu21_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg, &b_HLT_IsoMu21_eta2p1_MediumIsoPFTau32_Trk1_eta2p1_Reg);
//   fChain->SetBranchAddress("HLT_IsoMu22", &HLT_IsoMu22, &b_HLT_IsoMu22);
//   fChain->SetBranchAddress("HLT_IsoMu22_eta2p1", &HLT_IsoMu22_eta2p1, &b_HLT_IsoMu22_eta2p1);
//   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
//   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
//   fChain->SetBranchAddress("HLT_IsoTkMu18", &HLT_IsoTkMu18, &b_HLT_IsoTkMu18);
//   fChain->SetBranchAddress("HLT_IsoTkMu20", &HLT_IsoTkMu20, &b_HLT_IsoTkMu20);
//   fChain->SetBranchAddress("HLT_IsoTkMu22", &HLT_IsoTkMu22, &b_HLT_IsoTkMu22);
//   fChain->SetBranchAddress("HLT_IsoTkMu22_eta2p1", &HLT_IsoTkMu22_eta2p1, &b_HLT_IsoTkMu22_eta2p1);
//   fChain->SetBranchAddress("HLT_IsoTkMu24", &HLT_IsoTkMu24, &b_HLT_IsoTkMu24);
//   fChain->SetBranchAddress("HLT_IsoTkMu27", &HLT_IsoTkMu27, &b_HLT_IsoTkMu27);
//   fChain->SetBranchAddress("HLT_JetE30_NoBPTX3BX", &HLT_JetE30_NoBPTX3BX, &b_HLT_JetE30_NoBPTX3BX);
//   fChain->SetBranchAddress("HLT_JetE30_NoBPTX", &HLT_JetE30_NoBPTX, &b_HLT_JetE30_NoBPTX);
//   fChain->SetBranchAddress("HLT_JetE50_NoBPTX3BX", &HLT_JetE50_NoBPTX3BX, &b_HLT_JetE50_NoBPTX3BX);
//   fChain->SetBranchAddress("HLT_JetE70_NoBPTX3BX", &HLT_JetE70_NoBPTX3BX, &b_HLT_JetE70_NoBPTX3BX);
//   fChain->SetBranchAddress("HLT_L1SingleMu18", &HLT_L1SingleMu18, &b_HLT_L1SingleMu18);
//   fChain->SetBranchAddress("HLT_L2Mu10", &HLT_L2Mu10, &b_HLT_L2Mu10);
//   fChain->SetBranchAddress("HLT_L1SingleMuOpen", &HLT_L1SingleMuOpen, &b_HLT_L1SingleMuOpen);
//   fChain->SetBranchAddress("HLT_L1SingleMuOpen_DT", &HLT_L1SingleMuOpen_DT, &b_HLT_L1SingleMuOpen_DT);
//   fChain->SetBranchAddress("HLT_L2DoubleMu23_NoVertex", &HLT_L2DoubleMu23_NoVertex, &b_HLT_L2DoubleMu23_NoVertex);
//   fChain->SetBranchAddress("HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10", &HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10, &b_HLT_L2DoubleMu28_NoVertex_2Cha_Angle2p5_Mass10);
//   fChain->SetBranchAddress("HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10", &HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10, &b_HLT_L2DoubleMu38_NoVertex_2Cha_Angle2p5_Mass10);
//   fChain->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX3BX", &HLT_L2Mu10_NoVertex_NoBPTX3BX, &b_HLT_L2Mu10_NoVertex_NoBPTX3BX);
//   fChain->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX", &HLT_L2Mu10_NoVertex_NoBPTX, &b_HLT_L2Mu10_NoVertex_NoBPTX);
//   fChain->SetBranchAddress("HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu35_NoVertex_3Sta_NoBPTX3BX);
//   fChain->SetBranchAddress("HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX);
//   fChain->SetBranchAddress("HLT_LooseIsoPFTau50_Trk30_eta2p1", &HLT_LooseIsoPFTau50_Trk30_eta2p1, &b_HLT_LooseIsoPFTau50_Trk30_eta2p1);
//   fChain->SetBranchAddress("HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80", &HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80, &b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET80);
//   fChain->SetBranchAddress("HLT_LooseIsoPFTau50_Trk30_eta2p1_MET90", &HLT_LooseIsoPFTau50_Trk30_eta2p1_MET90, &b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET90);
//   fChain->SetBranchAddress("HLT_LooseIsoPFTau50_Trk30_eta2p1_MET110", &HLT_LooseIsoPFTau50_Trk30_eta2p1_MET110, &b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET110);
//   fChain->SetBranchAddress("HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120", &HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120, &b_HLT_LooseIsoPFTau50_Trk30_eta2p1_MET120);
//   fChain->SetBranchAddress("HLT_PFTau120_eta2p1", &HLT_PFTau120_eta2p1, &b_HLT_PFTau120_eta2p1);
//   fChain->SetBranchAddress("HLT_VLooseIsoPFTau120_Trk50_eta2p1", &HLT_VLooseIsoPFTau120_Trk50_eta2p1, &b_HLT_VLooseIsoPFTau120_Trk50_eta2p1);
//   fChain->SetBranchAddress("HLT_VLooseIsoPFTau140_Trk50_eta2p1", &HLT_VLooseIsoPFTau140_Trk50_eta2p1, &b_HLT_VLooseIsoPFTau140_Trk50_eta2p1);
//   fChain->SetBranchAddress("HLT_Mu17_Mu8", &HLT_Mu17_Mu8, &b_HLT_Mu17_Mu8);
//   fChain->SetBranchAddress("HLT_Mu17_Mu8_DZ", &HLT_Mu17_Mu8_DZ, &b_HLT_Mu17_Mu8_DZ);
//   fChain->SetBranchAddress("HLT_Mu17_Mu8_SameSign", &HLT_Mu17_Mu8_SameSign, &b_HLT_Mu17_Mu8_SameSign);
//   fChain->SetBranchAddress("HLT_Mu17_Mu8_SameSign_DZ", &HLT_Mu17_Mu8_SameSign_DZ, &b_HLT_Mu17_Mu8_SameSign_DZ);
//   fChain->SetBranchAddress("HLT_Mu20_Mu10", &HLT_Mu20_Mu10, &b_HLT_Mu20_Mu10);
//   fChain->SetBranchAddress("HLT_Mu20_Mu10_DZ", &HLT_Mu20_Mu10_DZ, &b_HLT_Mu20_Mu10_DZ);
//   fChain->SetBranchAddress("HLT_Mu20_Mu10_SameSign", &HLT_Mu20_Mu10_SameSign, &b_HLT_Mu20_Mu10_SameSign);
//   fChain->SetBranchAddress("HLT_Mu20_Mu10_SameSign_DZ", &HLT_Mu20_Mu10_SameSign_DZ, &b_HLT_Mu20_Mu10_SameSign_DZ);
//   fChain->SetBranchAddress("HLT_Mu17_TkMu8_DZ", &HLT_Mu17_TkMu8_DZ, &b_HLT_Mu17_TkMu8_DZ);
//   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL);
//   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ);
//   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL);
//   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ);
//   fChain->SetBranchAddress("HLT_Mu25_TkMu0_dEta18_Onia", &HLT_Mu25_TkMu0_dEta18_Onia, &b_HLT_Mu25_TkMu0_dEta18_Onia);
//   fChain->SetBranchAddress("HLT_Mu27_TkMu8", &HLT_Mu27_TkMu8, &b_HLT_Mu27_TkMu8);
//   fChain->SetBranchAddress("HLT_Mu30_TkMu11", &HLT_Mu30_TkMu11, &b_HLT_Mu30_TkMu11);
//   fChain->SetBranchAddress("HLT_Mu30_eta2p1_PFJet150_PFJet50", &HLT_Mu30_eta2p1_PFJet150_PFJet50, &b_HLT_Mu30_eta2p1_PFJet150_PFJet50);
//   fChain->SetBranchAddress("HLT_Mu40_TkMu11", &HLT_Mu40_TkMu11, &b_HLT_Mu40_TkMu11);
//   fChain->SetBranchAddress("HLT_Mu40_eta2p1_PFJet200_PFJet50", &HLT_Mu40_eta2p1_PFJet200_PFJet50, &b_HLT_Mu40_eta2p1_PFJet200_PFJet50);
//   fChain->SetBranchAddress("HLT_Mu20", &HLT_Mu20, &b_HLT_Mu20);
//   fChain->SetBranchAddress("HLT_TkMu20", &HLT_TkMu20, &b_HLT_TkMu20);
//   fChain->SetBranchAddress("HLT_Mu24_eta2p1", &HLT_Mu24_eta2p1, &b_HLT_Mu24_eta2p1);
//   fChain->SetBranchAddress("HLT_TkMu24_eta2p1", &HLT_TkMu24_eta2p1, &b_HLT_TkMu24_eta2p1);
//   fChain->SetBranchAddress("HLT_Mu27", &HLT_Mu27, &b_HLT_Mu27);
//   fChain->SetBranchAddress("HLT_TkMu27", &HLT_TkMu27, &b_HLT_TkMu27);
//   fChain->SetBranchAddress("HLT_Mu45_eta2p1", &HLT_Mu45_eta2p1, &b_HLT_Mu45_eta2p1);
//   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
//   fChain->SetBranchAddress("HLT_TkMu50", &HLT_TkMu50, &b_HLT_TkMu50);
//   fChain->SetBranchAddress("HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL", &HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL, &b_HLT_Mu38NoFiltersNoVtx_Photon38_CaloIdL);
//   fChain->SetBranchAddress("HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL", &HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL, &b_HLT_Mu42NoFiltersNoVtx_Photon42_CaloIdL);
//   fChain->SetBranchAddress("HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL", &HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL, &b_HLT_Mu28NoFiltersNoVtxDisplaced_Photon28_CaloIdL);
//   fChain->SetBranchAddress("HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL", &HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL, &b_HLT_Mu33NoFiltersNoVtxDisplaced_Photon33_CaloIdL);
//   fChain->SetBranchAddress("HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL", &HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL, &b_HLT_Mu23NoFiltersNoVtx_Photon23_CaloIdL);
//   fChain->SetBranchAddress("HLT_DoubleMu18NoFiltersNoVtx", &HLT_DoubleMu18NoFiltersNoVtx, &b_HLT_DoubleMu18NoFiltersNoVtx);
//   fChain->SetBranchAddress("HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight", &HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight, &b_HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Tight);
//   fChain->SetBranchAddress("HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose", &HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose, &b_HLT_Mu33NoFiltersNoVtxDisplaced_DisplacedJet50_Loose);
//   fChain->SetBranchAddress("HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose", &HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose, &b_HLT_Mu28NoFiltersNoVtx_DisplacedJet40_Loose);
//   fChain->SetBranchAddress("HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight", &HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight, &b_HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Tight);
//   fChain->SetBranchAddress("HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose", &HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose, &b_HLT_Mu38NoFiltersNoVtxDisplaced_DisplacedJet60_Loose);
//   fChain->SetBranchAddress("HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose", &HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose, &b_HLT_Mu38NoFiltersNoVtx_DisplacedJet60_Loose);
//   fChain->SetBranchAddress("HLT_Mu28NoFiltersNoVtx_CentralCaloJet40", &HLT_Mu28NoFiltersNoVtx_CentralCaloJet40, &b_HLT_Mu28NoFiltersNoVtx_CentralCaloJet40);
   fChain->SetBranchAddress("HLT_PFHT300_PFMET100", &HLT_PFHT300_PFMET100, &b_HLT_PFHT300_PFMET100);
   fChain->SetBranchAddress("HLT_PFHT300_PFMET110", &HLT_PFHT300_PFMET110, &b_HLT_PFHT300_PFMET110);
//   fChain->SetBranchAddress("HLT_PFHT550_4JetPt50", &HLT_PFHT550_4JetPt50, &b_HLT_PFHT550_4JetPt50);
//   fChain->SetBranchAddress("HLT_PFHT650_4JetPt50", &HLT_PFHT650_4JetPt50, &b_HLT_PFHT650_4JetPt50);
//   fChain->SetBranchAddress("HLT_PFHT750_4JetPt50", &HLT_PFHT750_4JetPt50, &b_HLT_PFHT750_4JetPt50);
//   fChain->SetBranchAddress("HLT_PFJet15_NoCaloMatched", &HLT_PFJet15_NoCaloMatched, &b_HLT_PFJet15_NoCaloMatched);
//   fChain->SetBranchAddress("HLT_PFJet25_NoCaloMatched", &HLT_PFJet25_NoCaloMatched, &b_HLT_PFJet25_NoCaloMatched);
//   fChain->SetBranchAddress("HLT_DiPFJet15_NoCaloMatched", &HLT_DiPFJet15_NoCaloMatched, &b_HLT_DiPFJet15_NoCaloMatched);
//   fChain->SetBranchAddress("HLT_DiPFJet25_NoCaloMatched", &HLT_DiPFJet25_NoCaloMatched, &b_HLT_DiPFJet25_NoCaloMatched);
//   fChain->SetBranchAddress("HLT_DiPFJet15_FBEta3_NoCaloMatched", &HLT_DiPFJet15_FBEta3_NoCaloMatched, &b_HLT_DiPFJet15_FBEta3_NoCaloMatched);
//   fChain->SetBranchAddress("HLT_DiPFJet25_FBEta3_NoCaloMatched", &HLT_DiPFJet25_FBEta3_NoCaloMatched, &b_HLT_DiPFJet25_FBEta3_NoCaloMatched);
//   fChain->SetBranchAddress("HLT_DiPFJetAve15_HFJEC", &HLT_DiPFJetAve15_HFJEC, &b_HLT_DiPFJetAve15_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve25_HFJEC", &HLT_DiPFJetAve25_HFJEC, &b_HLT_DiPFJetAve25_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve35_HFJEC", &HLT_DiPFJetAve35_HFJEC, &b_HLT_DiPFJetAve35_HFJEC);
//   fChain->SetBranchAddress("HLT_AK8PFJet40", &HLT_AK8PFJet40, &b_HLT_AK8PFJet40);
//   fChain->SetBranchAddress("HLT_AK8PFJet60", &HLT_AK8PFJet60, &b_HLT_AK8PFJet60);
//   fChain->SetBranchAddress("HLT_AK8PFJet80", &HLT_AK8PFJet80, &b_HLT_AK8PFJet80);
//   fChain->SetBranchAddress("HLT_AK8PFJet140", &HLT_AK8PFJet140, &b_HLT_AK8PFJet140);
//   fChain->SetBranchAddress("HLT_AK8PFJet200", &HLT_AK8PFJet200, &b_HLT_AK8PFJet200);
//   fChain->SetBranchAddress("HLT_AK8PFJet260", &HLT_AK8PFJet260, &b_HLT_AK8PFJet260);
//   fChain->SetBranchAddress("HLT_AK8PFJet320", &HLT_AK8PFJet320, &b_HLT_AK8PFJet320);
//   fChain->SetBranchAddress("HLT_AK8PFJet400", &HLT_AK8PFJet400, &b_HLT_AK8PFJet400);
//   fChain->SetBranchAddress("HLT_AK8PFJet450", &HLT_AK8PFJet450, &b_HLT_AK8PFJet450);
//   fChain->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
//   fChain->SetBranchAddress("HLT_PFJet40", &HLT_PFJet40, &b_HLT_PFJet40);
//   fChain->SetBranchAddress("HLT_PFJet60", &HLT_PFJet60, &b_HLT_PFJet60);
//   fChain->SetBranchAddress("HLT_PFJet80", &HLT_PFJet80, &b_HLT_PFJet80);
//   fChain->SetBranchAddress("HLT_PFJet140", &HLT_PFJet140, &b_HLT_PFJet140);
//   fChain->SetBranchAddress("HLT_PFJet200", &HLT_PFJet200, &b_HLT_PFJet200);
//   fChain->SetBranchAddress("HLT_PFJet260", &HLT_PFJet260, &b_HLT_PFJet260);
//   fChain->SetBranchAddress("HLT_PFJet320", &HLT_PFJet320, &b_HLT_PFJet320);
//   fChain->SetBranchAddress("HLT_PFJet400", &HLT_PFJet400, &b_HLT_PFJet400);
//   fChain->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
//   fChain->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
//   fChain->SetBranchAddress("HLT_DiPFJetAve40", &HLT_DiPFJetAve40, &b_HLT_DiPFJetAve40);
//   fChain->SetBranchAddress("HLT_DiPFJetAve60", &HLT_DiPFJetAve60, &b_HLT_DiPFJetAve60);
//   fChain->SetBranchAddress("HLT_DiPFJetAve80", &HLT_DiPFJetAve80, &b_HLT_DiPFJetAve80);
//   fChain->SetBranchAddress("HLT_DiPFJetAve140", &HLT_DiPFJetAve140, &b_HLT_DiPFJetAve140);
//   fChain->SetBranchAddress("HLT_DiPFJetAve200", &HLT_DiPFJetAve200, &b_HLT_DiPFJetAve200);
//   fChain->SetBranchAddress("HLT_DiPFJetAve260", &HLT_DiPFJetAve260, &b_HLT_DiPFJetAve260);
//   fChain->SetBranchAddress("HLT_DiPFJetAve320", &HLT_DiPFJetAve320, &b_HLT_DiPFJetAve320);
//   fChain->SetBranchAddress("HLT_DiPFJetAve400", &HLT_DiPFJetAve400, &b_HLT_DiPFJetAve400);
//   fChain->SetBranchAddress("HLT_DiPFJetAve500", &HLT_DiPFJetAve500, &b_HLT_DiPFJetAve500);
//   fChain->SetBranchAddress("HLT_DiPFJetAve60_HFJEC", &HLT_DiPFJetAve60_HFJEC, &b_HLT_DiPFJetAve60_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve80_HFJEC", &HLT_DiPFJetAve80_HFJEC, &b_HLT_DiPFJetAve80_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve100_HFJEC", &HLT_DiPFJetAve100_HFJEC, &b_HLT_DiPFJetAve100_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve160_HFJEC", &HLT_DiPFJetAve160_HFJEC, &b_HLT_DiPFJetAve160_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve220_HFJEC", &HLT_DiPFJetAve220_HFJEC, &b_HLT_DiPFJetAve220_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJetAve300_HFJEC", &HLT_DiPFJetAve300_HFJEC, &b_HLT_DiPFJetAve300_HFJEC);
//   fChain->SetBranchAddress("HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140", &HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140, &b_HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu140);
//   fChain->SetBranchAddress("HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80", &HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80, &b_HLT_DiPFJet40_DEta3p5_MJJ600_PFMETNoMu80);
//   fChain->SetBranchAddress("HLT_DiCentralPFJet55_PFMET110", &HLT_DiCentralPFJet55_PFMET110, &b_HLT_DiCentralPFJet55_PFMET110);
//   fChain->SetBranchAddress("HLT_DiCentralPFJet170", &HLT_DiCentralPFJet170, &b_HLT_DiCentralPFJet170);
//   fChain->SetBranchAddress("HLT_SingleCentralPFJet170_CFMax0p1", &HLT_SingleCentralPFJet170_CFMax0p1, &b_HLT_SingleCentralPFJet170_CFMax0p1);
//   fChain->SetBranchAddress("HLT_DiCentralPFJet170_CFMax0p1", &HLT_DiCentralPFJet170_CFMax0p1, &b_HLT_DiCentralPFJet170_CFMax0p1);
//   fChain->SetBranchAddress("HLT_DiCentralPFJet220_CFMax0p3", &HLT_DiCentralPFJet220_CFMax0p3, &b_HLT_DiCentralPFJet220_CFMax0p3);
//   fChain->SetBranchAddress("HLT_DiCentralPFJet330_CFMax0p5", &HLT_DiCentralPFJet330_CFMax0p5, &b_HLT_DiCentralPFJet330_CFMax0p5);
//   fChain->SetBranchAddress("HLT_DiCentralPFJet430", &HLT_DiCentralPFJet430, &b_HLT_DiCentralPFJet430);
//   fChain->SetBranchAddress("HLT_PFHT125", &HLT_PFHT125, &b_HLT_PFHT125);
//   fChain->SetBranchAddress("HLT_PFHT200", &HLT_PFHT200, &b_HLT_PFHT200);
//   fChain->SetBranchAddress("HLT_PFHT250", &HLT_PFHT250, &b_HLT_PFHT250);
//   fChain->SetBranchAddress("HLT_PFHT300", &HLT_PFHT300, &b_HLT_PFHT300);
//   fChain->SetBranchAddress("HLT_PFHT350", &HLT_PFHT350, &b_HLT_PFHT350);
//   fChain->SetBranchAddress("HLT_PFHT400", &HLT_PFHT400, &b_HLT_PFHT400);
//   fChain->SetBranchAddress("HLT_PFHT475", &HLT_PFHT475, &b_HLT_PFHT475);
//   fChain->SetBranchAddress("HLT_PFHT600", &HLT_PFHT600, &b_HLT_PFHT600);
//   fChain->SetBranchAddress("HLT_PFHT650", &HLT_PFHT650, &b_HLT_PFHT650);
//   fChain->SetBranchAddress("HLT_PFHT800", &HLT_PFHT800, &b_HLT_PFHT800);
//   fChain->SetBranchAddress("HLT_PFHT900", &HLT_PFHT900, &b_HLT_PFHT900);
//   fChain->SetBranchAddress("HLT_PFHT200_PFAlphaT0p51", &HLT_PFHT200_PFAlphaT0p51, &b_HLT_PFHT200_PFAlphaT0p51);
//   fChain->SetBranchAddress("HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57", &HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57, &b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p57);
//   fChain->SetBranchAddress("HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63", &HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63, &b_HLT_PFHT200_DiPFJetAve90_PFAlphaT0p63);
//   fChain->SetBranchAddress("HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55", &HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55, &b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p55);
//   fChain->SetBranchAddress("HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58", &HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58, &b_HLT_PFHT250_DiPFJetAve90_PFAlphaT0p58);
//   fChain->SetBranchAddress("HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53", &HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53, &b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p53);
//   fChain->SetBranchAddress("HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54", &HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54, &b_HLT_PFHT300_DiPFJetAve90_PFAlphaT0p54);
//   fChain->SetBranchAddress("HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52", &HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52, &b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p52);
//   fChain->SetBranchAddress("HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53", &HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53, &b_HLT_PFHT350_DiPFJetAve90_PFAlphaT0p53);
//   fChain->SetBranchAddress("HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51", &HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51, &b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p51);
//   fChain->SetBranchAddress("HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52", &HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52, &b_HLT_PFHT400_DiPFJetAve90_PFAlphaT0p52);
   fChain->SetBranchAddress("HLT_MET60_IsoTrk35_Loose", &HLT_MET60_IsoTrk35_Loose, &b_HLT_MET60_IsoTrk35_Loose);
   fChain->SetBranchAddress("HLT_MET75_IsoTrk50", &HLT_MET75_IsoTrk50, &b_HLT_MET75_IsoTrk50);
   fChain->SetBranchAddress("HLT_MET90_IsoTrk50", &HLT_MET90_IsoTrk50, &b_HLT_MET90_IsoTrk50);
   fChain->SetBranchAddress("HLT_PFMET120_BTagCSV_p067", &HLT_PFMET120_BTagCSV_p067, &b_HLT_PFMET120_BTagCSV_p067);
   fChain->SetBranchAddress("HLT_PFMET120_Mu5", &HLT_PFMET120_Mu5, &b_HLT_PFMET120_Mu5);
   fChain->SetBranchAddress("HLT_PFMET170_NotCleaned", &HLT_PFMET170_NotCleaned, &b_HLT_PFMET170_NotCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_HBHECleaned", &HLT_PFMET170_HBHECleaned, &b_HLT_PFMET170_HBHECleaned);
   fChain->SetBranchAddress("HLT_PFMET170_BeamHaloCleaned", &HLT_PFMET170_BeamHaloCleaned, &b_HLT_PFMET170_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMET170_HBHE_BeamHaloCleaned", &HLT_PFMET170_HBHE_BeamHaloCleaned, &b_HLT_PFMET170_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned", &HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned, &b_HLT_PFMETTypeOne190_HBHE_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMET90_PFMHT90_IDTight", &HLT_PFMET90_PFMHT90_IDTight, &b_HLT_PFMET90_PFMHT90_IDTight);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight", &HLT_PFMET100_PFMHT100_IDTight, &b_HLT_PFMET100_PFMHT100_IDTight);
   fChain->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned", &HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned, &b_HLT_PFMET100_PFMHT100_IDTight_BeamHaloCleaned);
   fChain->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight", &HLT_PFMET110_PFMHT110_IDTight, &b_HLT_PFMET110_PFMHT110_IDTight);
   fChain->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight", &HLT_PFMET120_PFMHT120_IDTight, &b_HLT_PFMET120_PFMHT120_IDTight);
//   fChain->SetBranchAddress("HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067", &HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067, &b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight_BTagCSV_p067);
//   fChain->SetBranchAddress("HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight", &HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight, &b_HLT_CaloMHTNoPU90_PFMET90_PFMHT90_IDTight);
//   fChain->SetBranchAddress("HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq200", &HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq200, &b_HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq200);
//   fChain->SetBranchAddress("HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq460", &HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq460, &b_HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq460);
//   fChain->SetBranchAddress("HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq240", &HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq240, &b_HLT_QuadPFJet_BTagCSV_p016_p11_VBF_Mqq240);
//   fChain->SetBranchAddress("HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq500", &HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq500, &b_HLT_QuadPFJet_BTagCSV_p016_VBF_Mqq500);
//   fChain->SetBranchAddress("HLT_QuadPFJet_VBF", &HLT_QuadPFJet_VBF, &b_HLT_QuadPFJet_VBF);
//   fChain->SetBranchAddress("HLT_L1_TripleJet_VBF", &HLT_L1_TripleJet_VBF, &b_HLT_L1_TripleJet_VBF);
//   fChain->SetBranchAddress("HLT_QuadJet45_TripleBTagCSV_p087", &HLT_QuadJet45_TripleBTagCSV_p087, &b_HLT_QuadJet45_TripleBTagCSV_p087);
//   fChain->SetBranchAddress("HLT_QuadJet45_DoubleBTagCSV_p087", &HLT_QuadJet45_DoubleBTagCSV_p087, &b_HLT_QuadJet45_DoubleBTagCSV_p087);
//   fChain->SetBranchAddress("HLT_DoubleJet90_Double30_TripleBTagCSV_p087", &HLT_DoubleJet90_Double30_TripleBTagCSV_p087, &b_HLT_DoubleJet90_Double30_TripleBTagCSV_p087);
//   fChain->SetBranchAddress("HLT_DoubleJet90_Double30_DoubleBTagCSV_p087", &HLT_DoubleJet90_Double30_DoubleBTagCSV_p087, &b_HLT_DoubleJet90_Double30_DoubleBTagCSV_p087);
//   fChain->SetBranchAddress("HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160", &HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160, &b_HLT_DoubleJetsC100_DoubleBTagCSV_p026_DoublePFJetsC160);
//   fChain->SetBranchAddress("HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6", &HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6, &b_HLT_DoubleJetsC100_DoubleBTagCSV_p014_DoublePFJetsC100MaxDeta1p6);
//   fChain->SetBranchAddress("HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172", &HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172, &b_HLT_DoubleJetsC112_DoubleBTagCSV_p026_DoublePFJetsC172);
//   fChain->SetBranchAddress("HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6", &HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6, &b_HLT_DoubleJetsC112_DoubleBTagCSV_p014_DoublePFJetsC112MaxDeta1p6);
//   fChain->SetBranchAddress("HLT_DoubleJetsC100_SingleBTagCSV_p026", &HLT_DoubleJetsC100_SingleBTagCSV_p026, &b_HLT_DoubleJetsC100_SingleBTagCSV_p026);
//   fChain->SetBranchAddress("HLT_DoubleJetsC100_SingleBTagCSV_p014", &HLT_DoubleJetsC100_SingleBTagCSV_p014, &b_HLT_DoubleJetsC100_SingleBTagCSV_p014);
//   fChain->SetBranchAddress("HLT_DoubleJetsC100_SingleBTagCSV_p026_SinglePFJetC350", &HLT_DoubleJetsC100_SingleBTagCSV_p026_SinglePFJetC350, &b_HLT_DoubleJetsC100_SingleBTagCSV_p026_SinglePFJetC350);
//   fChain->SetBranchAddress("HLT_DoubleJetsC100_SingleBTagCSV_p014_SinglePFJetC350", &HLT_DoubleJetsC100_SingleBTagCSV_p014_SinglePFJetC350, &b_HLT_DoubleJetsC100_SingleBTagCSV_p014_SinglePFJetC350);
//   fChain->SetBranchAddress("HLT_Photon135_PFMET100", &HLT_Photon135_PFMET100, &b_HLT_Photon135_PFMET100);
//   fChain->SetBranchAddress("HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40", &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40, &b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_PFMET40);
//   fChain->SetBranchAddress("HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF", &HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF, &b_HLT_Photon22_R9Id90_HE10_Iso40_EBOnly_VBF);
//   fChain->SetBranchAddress("HLT_Photon250_NoHE", &HLT_Photon250_NoHE, &b_HLT_Photon250_NoHE);
//   fChain->SetBranchAddress("HLT_Photon300_NoHE", &HLT_Photon300_NoHE, &b_HLT_Photon300_NoHE);
//   fChain->SetBranchAddress("HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60", &HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60, &b_HLT_Photon26_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon16_AND_HE10_R9Id65_Eta2_Mass60);
//   fChain->SetBranchAddress("HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15", &HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15, &b_HLT_Photon36_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon22_AND_HE10_R9Id65_Eta2_Mass15);
//   fChain->SetBranchAddress("HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40", &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40, &b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_PFMET40);
//   fChain->SetBranchAddress("HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF", &HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF, &b_HLT_Photon36_R9Id90_HE10_Iso40_EBOnly_VBF);
//   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40", &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40, &b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_PFMET40);
//   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF", &HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF, &b_HLT_Photon50_R9Id90_HE10_Iso40_EBOnly_VBF);
//   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40", &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40, &b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_PFMET40);
//   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF", &HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF, &b_HLT_Photon75_R9Id90_HE10_Iso40_EBOnly_VBF);
//   fChain->SetBranchAddress("HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40", &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40, &b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_PFMET40);
//   fChain->SetBranchAddress("HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF", &HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF, &b_HLT_Photon90_R9Id90_HE10_Iso40_EBOnly_VBF);
//   fChain->SetBranchAddress("HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40", &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40, &b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_PFMET40);
//   fChain->SetBranchAddress("HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF", &HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF, &b_HLT_Photon120_R9Id90_HE10_Iso40_EBOnly_VBF);
//   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL", &HLT_Mu8_TrkIsoVVL, &b_HLT_Mu8_TrkIsoVVL);
//   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL);
//   fChain->SetBranchAddress("HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele17_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele17_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele17_CaloIdL_TrackIdL_IsoVL_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30);
//   fChain->SetBranchAddress("HLT_BTagMu_DiJet20_Mu5", &HLT_BTagMu_DiJet20_Mu5, &b_HLT_BTagMu_DiJet20_Mu5);
//   fChain->SetBranchAddress("HLT_BTagMu_DiJet40_Mu5", &HLT_BTagMu_DiJet40_Mu5, &b_HLT_BTagMu_DiJet40_Mu5);
//   fChain->SetBranchAddress("HLT_BTagMu_DiJet70_Mu5", &HLT_BTagMu_DiJet70_Mu5, &b_HLT_BTagMu_DiJet70_Mu5);
//   fChain->SetBranchAddress("HLT_BTagMu_DiJet110_Mu5", &HLT_BTagMu_DiJet110_Mu5, &b_HLT_BTagMu_DiJet110_Mu5);
//   fChain->SetBranchAddress("HLT_BTagMu_DiJet170_Mu5", &HLT_BTagMu_DiJet170_Mu5, &b_HLT_BTagMu_DiJet170_Mu5);
//   fChain->SetBranchAddress("HLT_BTagMu_Jet300_Mu5", &HLT_BTagMu_Jet300_Mu5, &b_HLT_BTagMu_Jet300_Mu5);
//   fChain->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5", &HLT_BTagMu_AK8Jet300_Mu5, &b_HLT_BTagMu_AK8Jet300_Mu5);
//   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
//   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_L1JetTauSeeded", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_L1JetTauSeeded, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_L1JetTauSeeded);
//   fChain->SetBranchAddress("HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
//   fChain->SetBranchAddress("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL, &b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL);
//   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL", &HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL, &b_HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_Mu37_Ele27_CaloIdL_GsfTrkIdVL", &HLT_Mu37_Ele27_CaloIdL_GsfTrkIdVL, &b_HLT_Mu37_Ele27_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_Mu27_Ele37_CaloIdL_GsfTrkIdVL", &HLT_Mu27_Ele37_CaloIdL_GsfTrkIdVL, &b_HLT_Mu27_Ele37_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL);
//   fChain->SetBranchAddress("HLT_Mu12_Photon25_CaloIdL", &HLT_Mu12_Photon25_CaloIdL, &b_HLT_Mu12_Photon25_CaloIdL);
//   fChain->SetBranchAddress("HLT_Mu12_Photon25_CaloIdL_L1ISO", &HLT_Mu12_Photon25_CaloIdL_L1ISO, &b_HLT_Mu12_Photon25_CaloIdL_L1ISO);
//   fChain->SetBranchAddress("HLT_Mu12_Photon25_CaloIdL_L1OR", &HLT_Mu12_Photon25_CaloIdL_L1OR, &b_HLT_Mu12_Photon25_CaloIdL_L1OR);
//   fChain->SetBranchAddress("HLT_Mu17_Photon22_CaloIdL_L1ISO", &HLT_Mu17_Photon22_CaloIdL_L1ISO, &b_HLT_Mu17_Photon22_CaloIdL_L1ISO);
//   fChain->SetBranchAddress("HLT_Mu17_Photon30_CaloIdL_L1ISO", &HLT_Mu17_Photon30_CaloIdL_L1ISO, &b_HLT_Mu17_Photon30_CaloIdL_L1ISO);
//   fChain->SetBranchAddress("HLT_Mu17_Photon35_CaloIdL_L1ISO", &HLT_Mu17_Photon35_CaloIdL_L1ISO, &b_HLT_Mu17_Photon35_CaloIdL_L1ISO);
//   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL);
//   fChain->SetBranchAddress("HLT_TripleMu_5_3_3", &HLT_TripleMu_5_3_3, &b_HLT_TripleMu_5_3_3);
//   fChain->SetBranchAddress("HLT_TripleMu_12_10_5", &HLT_TripleMu_12_10_5, &b_HLT_TripleMu_12_10_5);
   fChain->SetBranchAddress("HLT_Mu3er_PFHT140_PFMET125", &HLT_Mu3er_PFHT140_PFMET125, &b_HLT_Mu3er_PFHT140_PFMET125);
   fChain->SetBranchAddress("HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067", &HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067, &b_HLT_Mu6_PFHT200_PFMET80_BTagCSV_p067);
   fChain->SetBranchAddress("HLT_Mu6_PFHT200_PFMET100", &HLT_Mu6_PFHT200_PFMET100, &b_HLT_Mu6_PFHT200_PFMET100);
   fChain->SetBranchAddress("HLT_Mu14er_PFMET100", &HLT_Mu14er_PFMET100, &b_HLT_Mu14er_PFMET100);
//   fChain->SetBranchAddress("HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Ele17_CaloIdL_GsfTrkIdVL", &HLT_Ele17_CaloIdL_GsfTrkIdVL, &b_HLT_Ele17_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_Ele17_CaloIdL_TrackIdL_IsoVL", &HLT_Ele17_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele17_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_AK8DiPFJet280_200_TrimMass30", &HLT_AK8DiPFJet280_200_TrimMass30, &b_HLT_AK8DiPFJet280_200_TrimMass30);
//   fChain->SetBranchAddress("HLT_AK8DiPFJet250_200_TrimMass30", &HLT_AK8DiPFJet250_200_TrimMass30, &b_HLT_AK8DiPFJet250_200_TrimMass30);
//   fChain->SetBranchAddress("HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20", &HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20, &b_HLT_AK8DiPFJet280_200_TrimMass30_BTagCSV_p20);
//   fChain->SetBranchAddress("HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20", &HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20, &b_HLT_AK8DiPFJet250_200_TrimMass30_BTagCSV_p20);
//   fChain->SetBranchAddress("HLT_PFHT650_WideJetMJJ900DEtaJJ1p5", &HLT_PFHT650_WideJetMJJ900DEtaJJ1p5, &b_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5);
//   fChain->SetBranchAddress("HLT_PFHT650_WideJetMJJ950DEtaJJ1p5", &HLT_PFHT650_WideJetMJJ950DEtaJJ1p5, &b_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5);
//   fChain->SetBranchAddress("HLT_Photon22", &HLT_Photon22, &b_HLT_Photon22);
//   fChain->SetBranchAddress("HLT_Photon30", &HLT_Photon30, &b_HLT_Photon30);
//   fChain->SetBranchAddress("HLT_Photon36", &HLT_Photon36, &b_HLT_Photon36);
//   fChain->SetBranchAddress("HLT_Photon50", &HLT_Photon50, &b_HLT_Photon50);
//   fChain->SetBranchAddress("HLT_Photon75", &HLT_Photon75, &b_HLT_Photon75);
//   fChain->SetBranchAddress("HLT_Photon90", &HLT_Photon90, &b_HLT_Photon90);
//   fChain->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
//   fChain->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
//   fChain->SetBranchAddress("HLT_Photon165_HE10", &HLT_Photon165_HE10, &b_HLT_Photon165_HE10);
//   fChain->SetBranchAddress("HLT_Photon22_R9Id90_HE10_IsoM", &HLT_Photon22_R9Id90_HE10_IsoM, &b_HLT_Photon22_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon30_R9Id90_HE10_IsoM", &HLT_Photon30_R9Id90_HE10_IsoM, &b_HLT_Photon30_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon36_R9Id90_HE10_IsoM", &HLT_Photon36_R9Id90_HE10_IsoM, &b_HLT_Photon36_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM", &HLT_Photon50_R9Id90_HE10_IsoM, &b_HLT_Photon50_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM", &HLT_Photon75_R9Id90_HE10_IsoM, &b_HLT_Photon75_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon90_R9Id90_HE10_IsoM", &HLT_Photon90_R9Id90_HE10_IsoM, &b_HLT_Photon90_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon120_R9Id90_HE10_IsoM", &HLT_Photon120_R9Id90_HE10_IsoM, &b_HLT_Photon120_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Photon165_R9Id90_HE10_IsoM", &HLT_Photon165_R9Id90_HE10_IsoM, &b_HLT_Photon165_R9Id90_HE10_IsoM);
//   fChain->SetBranchAddress("HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90, &b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90);
//   fChain->SetBranchAddress("HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70", &HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70, &b_HLT_Diphoton30_18_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelSeedMatch_Mass70);
//   fChain->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55);
//   fChain->SetBranchAddress("HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55", &HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55, &b_HLT_Diphoton30_18_Solid_R9Id_AND_IsoCaloId_AND_HE_R9Id_Mass55);
//   fChain->SetBranchAddress("HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55", &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55, &b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_DoublePixelVeto_Mass55);
//   fChain->SetBranchAddress("HLT_Dimuon0_Jpsi_Muon", &HLT_Dimuon0_Jpsi_Muon, &b_HLT_Dimuon0_Jpsi_Muon);
//   fChain->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon", &HLT_Dimuon0_Upsilon_Muon, &b_HLT_Dimuon0_Upsilon_Muon);
//   fChain->SetBranchAddress("HLT_QuadMuon0_Dimuon0_Jpsi", &HLT_QuadMuon0_Dimuon0_Jpsi, &b_HLT_QuadMuon0_Dimuon0_Jpsi);
//   fChain->SetBranchAddress("HLT_QuadMuon0_Dimuon0_Upsilon", &HLT_QuadMuon0_Dimuon0_Upsilon, &b_HLT_QuadMuon0_Dimuon0_Upsilon);
//   fChain->SetBranchAddress("HLT_Rsq0p25", &HLT_Rsq0p25, &b_HLT_Rsq0p25);
//   fChain->SetBranchAddress("HLT_Rsq0p30", &HLT_Rsq0p30, &b_HLT_Rsq0p30);
//   fChain->SetBranchAddress("HLT_RsqMR240_Rsq0p09_MR200", &HLT_RsqMR240_Rsq0p09_MR200, &b_HLT_RsqMR240_Rsq0p09_MR200);
//   fChain->SetBranchAddress("HLT_RsqMR240_Rsq0p09_MR200_4jet", &HLT_RsqMR240_Rsq0p09_MR200_4jet, &b_HLT_RsqMR240_Rsq0p09_MR200_4jet);
//   fChain->SetBranchAddress("HLT_RsqMR270_Rsq0p09_MR200", &HLT_RsqMR270_Rsq0p09_MR200, &b_HLT_RsqMR270_Rsq0p09_MR200);
//   fChain->SetBranchAddress("HLT_RsqMR270_Rsq0p09_MR200_4jet", &HLT_RsqMR270_Rsq0p09_MR200_4jet, &b_HLT_RsqMR270_Rsq0p09_MR200_4jet);
//   fChain->SetBranchAddress("HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200", &HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200, &b_HLT_Rsq0p02_MR300_TriPFJet80_60_40_BTagCSV_p063_p20_Mbb60_200);
//   fChain->SetBranchAddress("HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200", &HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200, &b_HLT_Rsq0p02_MR300_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200);
//   fChain->SetBranchAddress("HLT_HT200_DisplacedDijet40_DisplacedTrack", &HLT_HT200_DisplacedDijet40_DisplacedTrack, &b_HLT_HT200_DisplacedDijet40_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_HT250_DisplacedDijet40_DisplacedTrack", &HLT_HT250_DisplacedDijet40_DisplacedTrack, &b_HLT_HT250_DisplacedDijet40_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_HT350_DisplacedDijet40_DisplacedTrack", &HLT_HT350_DisplacedDijet40_DisplacedTrack, &b_HLT_HT350_DisplacedDijet40_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_HT350_DisplacedDijet80_DisplacedTrack", &HLT_HT350_DisplacedDijet80_DisplacedTrack, &b_HLT_HT350_DisplacedDijet80_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack", &HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack, &b_HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_HT350_DisplacedDijet40_Inclusive", &HLT_HT350_DisplacedDijet40_Inclusive, &b_HLT_HT350_DisplacedDijet40_Inclusive);
//   fChain->SetBranchAddress("HLT_HT400_DisplacedDijet40_Inclusive", &HLT_HT400_DisplacedDijet40_Inclusive, &b_HLT_HT400_DisplacedDijet40_Inclusive);
//   fChain->SetBranchAddress("HLT_HT500_DisplacedDijet40_Inclusive", &HLT_HT500_DisplacedDijet40_Inclusive, &b_HLT_HT500_DisplacedDijet40_Inclusive);
//   fChain->SetBranchAddress("HLT_HT550_DisplacedDijet40_Inclusive", &HLT_HT550_DisplacedDijet40_Inclusive, &b_HLT_HT550_DisplacedDijet40_Inclusive);
//   fChain->SetBranchAddress("HLT_HT550_DisplacedDijet80_Inclusive", &HLT_HT550_DisplacedDijet80_Inclusive, &b_HLT_HT550_DisplacedDijet80_Inclusive);
//   fChain->SetBranchAddress("HLT_HT650_DisplacedDijet80_Inclusive", &HLT_HT650_DisplacedDijet80_Inclusive, &b_HLT_HT650_DisplacedDijet80_Inclusive);
//   fChain->SetBranchAddress("HLT_HT750_DisplacedDijet80_Inclusive", &HLT_HT750_DisplacedDijet80_Inclusive, &b_HLT_HT750_DisplacedDijet80_Inclusive);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_DisplacedTrack", &HLT_VBF_DisplacedJet40_DisplacedTrack, &b_HLT_VBF_DisplacedJet40_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5", &HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5, &b_HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_TightID_DisplacedTrack", &HLT_VBF_DisplacedJet40_TightID_DisplacedTrack, &b_HLT_VBF_DisplacedJet40_TightID_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_Hadronic", &HLT_VBF_DisplacedJet40_Hadronic, &b_HLT_VBF_DisplacedJet40_Hadronic);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack", &HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack, &b_HLT_VBF_DisplacedJet40_Hadronic_2PromptTrack);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_TightID_Hadronic", &HLT_VBF_DisplacedJet40_TightID_Hadronic, &b_HLT_VBF_DisplacedJet40_TightID_Hadronic);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_VTightID_Hadronic", &HLT_VBF_DisplacedJet40_VTightID_Hadronic, &b_HLT_VBF_DisplacedJet40_VTightID_Hadronic);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_VVTightID_Hadronic", &HLT_VBF_DisplacedJet40_VVTightID_Hadronic, &b_HLT_VBF_DisplacedJet40_VVTightID_Hadronic);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack", &HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack, &b_HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack);
//   fChain->SetBranchAddress("HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack", &HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack, &b_HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack);
   fChain->SetBranchAddress("HLT_PFMETNoMu90_PFMHTNoMu90_IDTight", &HLT_PFMETNoMu90_PFMHTNoMu90_IDTight, &b_HLT_PFMETNoMu90_PFMHTNoMu90_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight", &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight, &b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight);
   fChain->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight);
//   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu90_PFMHTNoMu90_IDTight);
//   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu100_PFMHTNoMu100_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu100_PFMHTNoMu100_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu100_PFMHTNoMu100_IDTight);
//   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight);
//   fChain->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight);
//   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf_HT200", &HLT_Ele27_eta2p1_WPLoose_Gsf_HT200, &b_HLT_Ele27_eta2p1_WPLoose_Gsf_HT200);
//   fChain->SetBranchAddress("HLT_Photon90_CaloIdL_PFHT500", &HLT_Photon90_CaloIdL_PFHT500, &b_HLT_Photon90_CaloIdL_PFHT500);
//   fChain->SetBranchAddress("HLT_DoubleMu8_Mass8_PFHT250", &HLT_DoubleMu8_Mass8_PFHT250, &b_HLT_DoubleMu8_Mass8_PFHT250);
//   fChain->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT250);
//   fChain->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT250);
//   fChain->SetBranchAddress("HLT_DoubleMu8_Mass8_PFHT300", &HLT_DoubleMu8_Mass8_PFHT300, &b_HLT_DoubleMu8_Mass8_PFHT300);
//   fChain->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300);
//   fChain->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300);
//   fChain->SetBranchAddress("HLT_Mu10_CentralPFJet30_BTagCSV_p13", &HLT_Mu10_CentralPFJet30_BTagCSV_p13, &b_HLT_Mu10_CentralPFJet30_BTagCSV_p13);
   fChain->SetBranchAddress("HLT_DoubleMu3_PFMET50", &HLT_DoubleMu3_PFMET50, &b_HLT_DoubleMu3_PFMET50);
//   fChain->SetBranchAddress("HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13", &HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13, &b_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV_p13);
//   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400", &HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400, &b_HLT_Ele15_IsoVVVL_BTagCSV_p067_PFHT400);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT350_PFMET50", &HLT_Ele15_IsoVVVL_PFHT350_PFMET50, &b_HLT_Ele15_IsoVVVL_PFHT350_PFMET50);
//   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT600", &HLT_Ele15_IsoVVVL_PFHT600, &b_HLT_Ele15_IsoVVVL_PFHT600);
//   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT350", &HLT_Ele15_IsoVVVL_PFHT350, &b_HLT_Ele15_IsoVVVL_PFHT350);
   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT400_PFMET50", &HLT_Ele15_IsoVVVL_PFHT400_PFMET50, &b_HLT_Ele15_IsoVVVL_PFHT400_PFMET50);
//   fChain->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT400", &HLT_Ele15_IsoVVVL_PFHT400, &b_HLT_Ele15_IsoVVVL_PFHT400);
//   fChain->SetBranchAddress("HLT_Ele50_IsoVVVL_PFHT400", &HLT_Ele50_IsoVVVL_PFHT400, &b_HLT_Ele50_IsoVVVL_PFHT400);
//   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
//   fChain->SetBranchAddress("HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60, &b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60);
//   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400", &HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400, &b_HLT_Mu15_IsoVVVL_BTagCSV_p067_PFHT400);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT350_PFMET50", &HLT_Mu15_IsoVVVL_PFHT350_PFMET50, &b_HLT_Mu15_IsoVVVL_PFHT350_PFMET50);
//   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT600", &HLT_Mu15_IsoVVVL_PFHT600, &b_HLT_Mu15_IsoVVVL_PFHT600);
//   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT350", &HLT_Mu15_IsoVVVL_PFHT350, &b_HLT_Mu15_IsoVVVL_PFHT350);
   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT400_PFMET50", &HLT_Mu15_IsoVVVL_PFHT400_PFMET50, &b_HLT_Mu15_IsoVVVL_PFHT400_PFMET50);
//   fChain->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT400", &HLT_Mu15_IsoVVVL_PFHT400, &b_HLT_Mu15_IsoVVVL_PFHT400);
//   fChain->SetBranchAddress("HLT_Mu50_IsoVVVL_PFHT400", &HLT_Mu50_IsoVVVL_PFHT400, &b_HLT_Mu50_IsoVVVL_PFHT400);
//   fChain->SetBranchAddress("HLT_Dimuon16_Jpsi", &HLT_Dimuon16_Jpsi, &b_HLT_Dimuon16_Jpsi);
//   fChain->SetBranchAddress("HLT_Dimuon10_Jpsi_Barrel", &HLT_Dimuon10_Jpsi_Barrel, &b_HLT_Dimuon10_Jpsi_Barrel);
//   fChain->SetBranchAddress("HLT_Dimuon8_PsiPrime_Barrel", &HLT_Dimuon8_PsiPrime_Barrel, &b_HLT_Dimuon8_PsiPrime_Barrel);
//   fChain->SetBranchAddress("HLT_Dimuon8_Upsilon_Barrel", &HLT_Dimuon8_Upsilon_Barrel, &b_HLT_Dimuon8_Upsilon_Barrel);
//   fChain->SetBranchAddress("HLT_Dimuon0_Phi_Barrel", &HLT_Dimuon0_Phi_Barrel, &b_HLT_Dimuon0_Phi_Barrel);
//   fChain->SetBranchAddress("HLT_Mu16_TkMu0_dEta18_Onia", &HLT_Mu16_TkMu0_dEta18_Onia, &b_HLT_Mu16_TkMu0_dEta18_Onia);
//   fChain->SetBranchAddress("HLT_Mu16_TkMu0_dEta18_Phi", &HLT_Mu16_TkMu0_dEta18_Phi, &b_HLT_Mu16_TkMu0_dEta18_Phi);
//   fChain->SetBranchAddress("HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx", &HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx, &b_HLT_TrkMu15_DoubleTrkMu5NoFiltersNoVtx);
//   fChain->SetBranchAddress("HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx", &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx, &b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx);
//   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
//   fChain->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
//   fChain->SetBranchAddress("HLT_Mu3_PFJet40", &HLT_Mu3_PFJet40, &b_HLT_Mu3_PFJet40);
//   fChain->SetBranchAddress("HLT_Ele8_CaloIdM_TrackIdM_PFJet30", &HLT_Ele8_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele12_CaloIdM_TrackIdM_PFJet30", &HLT_Ele12_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele12_CaloIdM_TrackIdM_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele17_CaloIdM_TrackIdM_PFJet30", &HLT_Ele17_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele23_CaloIdM_TrackIdM_PFJet30", &HLT_Ele23_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30);
//   fChain->SetBranchAddress("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet140", &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet140, &b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet140);
//   fChain->SetBranchAddress("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165", &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165, &b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165);
//   fChain->SetBranchAddress("HLT_PFHT400_SixJet30_DoubleBTagCSV_p056", &HLT_PFHT400_SixJet30_DoubleBTagCSV_p056, &b_HLT_PFHT400_SixJet30_DoubleBTagCSV_p056);
//   fChain->SetBranchAddress("HLT_PFHT450_SixJet40_BTagCSV_p056", &HLT_PFHT450_SixJet40_BTagCSV_p056, &b_HLT_PFHT450_SixJet40_BTagCSV_p056);
//   fChain->SetBranchAddress("HLT_PFHT400_SixJet30", &HLT_PFHT400_SixJet30, &b_HLT_PFHT400_SixJet30);
//   fChain->SetBranchAddress("HLT_PFHT450_SixJet40", &HLT_PFHT450_SixJet40, &b_HLT_PFHT450_SixJet40);
//   fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT", &HLT_Ele115_CaloIdVT_GsfTrkIdT, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
//   fChain->SetBranchAddress("HLT_Mu55", &HLT_Mu55, &b_HLT_Mu55);
//   fChain->SetBranchAddress("HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15", &HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15, &b_HLT_Photon42_R9Id85_OR_CaloId24b40e_Iso50T80L_Photon25_AND_HE10_R9Id65_Eta2_Mass15);
//   fChain->SetBranchAddress("HLT_Photon90_CaloIdL_PFHT600", &HLT_Photon90_CaloIdL_PFHT600, &b_HLT_Photon90_CaloIdL_PFHT600);
//   fChain->SetBranchAddress("HLT_PixelTracks_Multiplicity60ForEndOfFill", &HLT_PixelTracks_Multiplicity60ForEndOfFill, &b_HLT_PixelTracks_Multiplicity60ForEndOfFill);
//   fChain->SetBranchAddress("HLT_PixelTracks_Multiplicity85ForEndOfFill", &HLT_PixelTracks_Multiplicity85ForEndOfFill, &b_HLT_PixelTracks_Multiplicity85ForEndOfFill);
//   fChain->SetBranchAddress("HLT_PixelTracks_Multiplicity110ForEndOfFill", &HLT_PixelTracks_Multiplicity110ForEndOfFill, &b_HLT_PixelTracks_Multiplicity110ForEndOfFill);
//   fChain->SetBranchAddress("HLT_PixelTracks_Multiplicity135ForEndOfFill", &HLT_PixelTracks_Multiplicity135ForEndOfFill, &b_HLT_PixelTracks_Multiplicity135ForEndOfFill);
//   fChain->SetBranchAddress("HLT_PixelTracks_Multiplicity160ForEndOfFill", &HLT_PixelTracks_Multiplicity160ForEndOfFill, &b_HLT_PixelTracks_Multiplicity160ForEndOfFill);
//   fChain->SetBranchAddress("HLT_FullTracks_Multiplicity80", &HLT_FullTracks_Multiplicity80, &b_HLT_FullTracks_Multiplicity80);
//   fChain->SetBranchAddress("HLT_FullTracks_Multiplicity100", &HLT_FullTracks_Multiplicity100, &b_HLT_FullTracks_Multiplicity100);
//   fChain->SetBranchAddress("HLT_FullTracks_Multiplicity130", &HLT_FullTracks_Multiplicity130, &b_HLT_FullTracks_Multiplicity130);
//   fChain->SetBranchAddress("HLT_FullTracks_Multiplicity150", &HLT_FullTracks_Multiplicity150, &b_HLT_FullTracks_Multiplicity150);
//   fChain->SetBranchAddress("HLT_ECALHT800", &HLT_ECALHT800, &b_HLT_ECALHT800);
//   fChain->SetBranchAddress("HLT_DiSC30_18_EIso_AND_HE_Mass70", &HLT_DiSC30_18_EIso_AND_HE_Mass70, &b_HLT_DiSC30_18_EIso_AND_HE_Mass70);
   fChain->SetBranchAddress("HLT_MET200", &HLT_MET200, &b_HLT_MET200);
//   fChain->SetBranchAddress("HLT_Ele27_HighEta_Ele20_Mass55", &HLT_Ele27_HighEta_Ele20_Mass55, &b_HLT_Ele27_HighEta_Ele20_Mass55);
//   fChain->SetBranchAddress("HLT_L1FatEvents", &HLT_L1FatEvents, &b_HLT_L1FatEvents);
//   fChain->SetBranchAddress("HLT_Physics", &HLT_Physics, &b_HLT_Physics);
//   fChain->SetBranchAddress("HLT_Physics_part0", &HLT_Physics_part0, &b_HLT_Physics_part0);
//   fChain->SetBranchAddress("HLT_Physics_part1", &HLT_Physics_part1, &b_HLT_Physics_part1);
//   fChain->SetBranchAddress("HLT_L1FatEvents_part0", &HLT_L1FatEvents_part0, &b_HLT_L1FatEvents_part0);
//   fChain->SetBranchAddress("HLT_L1FatEvents_part1", &HLT_L1FatEvents_part1, &b_HLT_L1FatEvents_part1);
//   fChain->SetBranchAddress("HLT_L1FatEvents_part2", &HLT_L1FatEvents_part2, &b_HLT_L1FatEvents_part2);
//   fChain->SetBranchAddress("HLT_L1FatEvents_part3", &HLT_L1FatEvents_part3, &b_HLT_L1FatEvents_part3);
//   fChain->SetBranchAddress("HLT_Random", &HLT_Random, &b_HLT_Random);
//   fChain->SetBranchAddress("HLT_ZeroBias", &HLT_ZeroBias, &b_HLT_ZeroBias);
//   fChain->SetBranchAddress("HLT_ZeroBias_part0", &HLT_ZeroBias_part0, &b_HLT_ZeroBias_part0);
//   fChain->SetBranchAddress("HLT_ZeroBias_part1", &HLT_ZeroBias_part1, &b_HLT_ZeroBias_part1);
//   fChain->SetBranchAddress("HLT_ZeroBias_part2", &HLT_ZeroBias_part2, &b_HLT_ZeroBias_part2);
//   fChain->SetBranchAddress("HLT_ZeroBias_part3", &HLT_ZeroBias_part3, &b_HLT_ZeroBias_part3);
//   fChain->SetBranchAddress("HLT_ZeroBias_part4", &HLT_ZeroBias_part4, &b_HLT_ZeroBias_part4);
//   fChain->SetBranchAddress("HLT_AK4CaloJet30", &HLT_AK4CaloJet30, &b_HLT_AK4CaloJet30);
//   fChain->SetBranchAddress("HLT_AK4CaloJet40", &HLT_AK4CaloJet40, &b_HLT_AK4CaloJet40);
//   fChain->SetBranchAddress("HLT_AK4CaloJet50", &HLT_AK4CaloJet50, &b_HLT_AK4CaloJet50);
//   fChain->SetBranchAddress("HLT_AK4CaloJet80", &HLT_AK4CaloJet80, &b_HLT_AK4CaloJet80);
//   fChain->SetBranchAddress("HLT_AK4CaloJet100", &HLT_AK4CaloJet100, &b_HLT_AK4CaloJet100);
//   fChain->SetBranchAddress("HLT_AK4PFJet30", &HLT_AK4PFJet30, &b_HLT_AK4PFJet30);
//   fChain->SetBranchAddress("HLT_AK4PFJet50", &HLT_AK4PFJet50, &b_HLT_AK4PFJet50);
//   fChain->SetBranchAddress("HLT_AK4PFJet80", &HLT_AK4PFJet80, &b_HLT_AK4PFJet80);
//   fChain->SetBranchAddress("HLT_AK4PFJet100", &HLT_AK4PFJet100, &b_HLT_AK4PFJet100);
//   fChain->SetBranchAddress("HLT_HISinglePhoton10", &HLT_HISinglePhoton10, &b_HLT_HISinglePhoton10);
//   fChain->SetBranchAddress("HLT_HISinglePhoton15", &HLT_HISinglePhoton15, &b_HLT_HISinglePhoton15);
//   fChain->SetBranchAddress("HLT_HISinglePhoton20", &HLT_HISinglePhoton20, &b_HLT_HISinglePhoton20);
//   fChain->SetBranchAddress("HLT_HISinglePhoton40", &HLT_HISinglePhoton40, &b_HLT_HISinglePhoton40);
//   fChain->SetBranchAddress("HLT_HISinglePhoton60", &HLT_HISinglePhoton60, &b_HLT_HISinglePhoton60);
//   fChain->SetBranchAddress("HLT_EcalCalibration", &HLT_EcalCalibration, &b_HLT_EcalCalibration);
//   fChain->SetBranchAddress("HLT_HcalCalibration", &HLT_HcalCalibration, &b_HLT_HcalCalibration);
//   fChain->SetBranchAddress("HLT_GlobalRunHPDNoise", &HLT_GlobalRunHPDNoise, &b_HLT_GlobalRunHPDNoise);
//   fChain->SetBranchAddress("HLT_L1BptxMinus", &HLT_L1BptxMinus, &b_HLT_L1BptxMinus);
//   fChain->SetBranchAddress("HLT_L1BptxPlus", &HLT_L1BptxPlus, &b_HLT_L1BptxPlus);
//   fChain->SetBranchAddress("HLT_L1NotBptxOR", &HLT_L1NotBptxOR, &b_HLT_L1NotBptxOR);
//   fChain->SetBranchAddress("HLT_L1BeamGasMinus", &HLT_L1BeamGasMinus, &b_HLT_L1BeamGasMinus);
//   fChain->SetBranchAddress("HLT_L1BeamGasPlus", &HLT_L1BeamGasPlus, &b_HLT_L1BeamGasPlus);
//   fChain->SetBranchAddress("HLT_L1BptxXOR", &HLT_L1BptxXOR, &b_HLT_L1BptxXOR);
//   fChain->SetBranchAddress("HLT_L1MinimumBiasHF_OR", &HLT_L1MinimumBiasHF_OR, &b_HLT_L1MinimumBiasHF_OR);
//   fChain->SetBranchAddress("HLT_L1MinimumBiasHF_AND", &HLT_L1MinimumBiasHF_AND, &b_HLT_L1MinimumBiasHF_AND);
//   fChain->SetBranchAddress("HLT_HcalNZS", &HLT_HcalNZS, &b_HLT_HcalNZS);
//   fChain->SetBranchAddress("HLT_HcalPhiSym", &HLT_HcalPhiSym, &b_HLT_HcalPhiSym);
//   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionAfterAbortGap", &HLT_ZeroBias_FirstCollisionAfterAbortGap, &b_HLT_ZeroBias_FirstCollisionAfterAbortGap);
//   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionAfterAbortGap_copy", &HLT_ZeroBias_FirstCollisionAfterAbortGap_copy, &b_HLT_ZeroBias_FirstCollisionAfterAbortGap_copy);
//   fChain->SetBranchAddress("HLT_ZeroBias_FirstCollisionAfterAbortGap_TCDS", &HLT_ZeroBias_FirstCollisionAfterAbortGap_TCDS, &b_HLT_ZeroBias_FirstCollisionAfterAbortGap_TCDS);
//   fChain->SetBranchAddress("HLT_ZeroBias_IsolatedBunches", &HLT_ZeroBias_IsolatedBunches, &b_HLT_ZeroBias_IsolatedBunches);
//   fChain->SetBranchAddress("HLT_Photon500", &HLT_Photon500, &b_HLT_Photon500);
//   fChain->SetBranchAddress("HLT_Photon600", &HLT_Photon600, &b_HLT_Photon600);
//   fChain->SetBranchAddress("HLT_Mu300", &HLT_Mu300, &b_HLT_Mu300);
//   fChain->SetBranchAddress("HLT_Mu350", &HLT_Mu350, &b_HLT_Mu350);
   fChain->SetBranchAddress("HLT_MET250", &HLT_MET250, &b_HLT_MET250);
   fChain->SetBranchAddress("HLT_MET300", &HLT_MET300, &b_HLT_MET300);
   fChain->SetBranchAddress("HLT_MET600", &HLT_MET600, &b_HLT_MET600);
   fChain->SetBranchAddress("HLT_MET700", &HLT_MET700, &b_HLT_MET700);
   fChain->SetBranchAddress("HLT_PFMET300", &HLT_PFMET300, &b_HLT_PFMET300);
   fChain->SetBranchAddress("HLT_PFMET400", &HLT_PFMET400, &b_HLT_PFMET400);
   fChain->SetBranchAddress("HLT_PFMET500", &HLT_PFMET500, &b_HLT_PFMET500);
   fChain->SetBranchAddress("HLT_PFMET600", &HLT_PFMET600, &b_HLT_PFMET600);
//   fChain->SetBranchAddress("HLT_Ele250_CaloIdVT_GsfTrkIdT", &HLT_Ele250_CaloIdVT_GsfTrkIdT, &b_HLT_Ele250_CaloIdVT_GsfTrkIdT);
//   fChain->SetBranchAddress("HLT_Ele300_CaloIdVT_GsfTrkIdT", &HLT_Ele300_CaloIdVT_GsfTrkIdT, &b_HLT_Ele300_CaloIdVT_GsfTrkIdT);
//   fChain->SetBranchAddress("HLT_HT2000", &HLT_HT2000, &b_HLT_HT2000);
//   fChain->SetBranchAddress("HLT_HT2500", &HLT_HT2500, &b_HLT_HT2500);
//   fChain->SetBranchAddress("HLT_IsoTrackHE", &HLT_IsoTrackHE, &b_HLT_IsoTrackHE);
//   fChain->SetBranchAddress("HLT_IsoTrackHB", &HLT_IsoTrackHB, &b_HLT_IsoTrackHB);
//   fChain->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
//   fChain->SetBranchAddress("HLT_HcalIsolatedbunch", &HLT_HcalIsolatedbunch, &b_HLT_HcalIsolatedbunch);
//   fChain->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
//   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
//   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
//   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
//   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
//   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
//   fChain->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
//   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
//   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
//   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
//   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
//   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
//   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
//   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
//   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
//   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
//   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
//   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
//   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
//   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
//   fChain->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
//   fChain->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
//   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
//   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
//   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
//   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
//   fChain->SetBranchAddress("L1_AlwaysTrue", &L1_AlwaysTrue, &b_L1_AlwaysTrue);
//   fChain->SetBranchAddress("L1_BPTX_LUT1_AND", &L1_BPTX_LUT1_AND, &b_L1_BPTX_LUT1_AND);
//   fChain->SetBranchAddress("L1_BPTX_LUT1_B1", &L1_BPTX_LUT1_B1, &b_L1_BPTX_LUT1_B1);
//   fChain->SetBranchAddress("L1_BPTX_LUT1_B2", &L1_BPTX_LUT1_B2, &b_L1_BPTX_LUT1_B2);
//   fChain->SetBranchAddress("L1_BPTX_LUT1_OR", &L1_BPTX_LUT1_OR, &b_L1_BPTX_LUT1_OR);
//   fChain->SetBranchAddress("L1_BPTX_LUT2_AND", &L1_BPTX_LUT2_AND, &b_L1_BPTX_LUT2_AND);
//   fChain->SetBranchAddress("L1_BPTX_LUT2_B1NotB2", &L1_BPTX_LUT2_B1NotB2, &b_L1_BPTX_LUT2_B1NotB2);
//   fChain->SetBranchAddress("L1_BPTX_LUT2_B2NotB1", &L1_BPTX_LUT2_B2NotB1, &b_L1_BPTX_LUT2_B2NotB1);
//   fChain->SetBranchAddress("L1_BPTX_LUT2_NotOR", &L1_BPTX_LUT2_NotOR, &b_L1_BPTX_LUT2_NotOR);
//   fChain->SetBranchAddress("L1_BPTX_TRIG2_AND", &L1_BPTX_TRIG2_AND, &b_L1_BPTX_TRIG2_AND);
//   fChain->SetBranchAddress("L1_BPTX_TRIG2_B1NotB2", &L1_BPTX_TRIG2_B1NotB2, &b_L1_BPTX_TRIG2_B1NotB2);
//   fChain->SetBranchAddress("L1_BPTX_TRIG2_B2NotB1", &L1_BPTX_TRIG2_B2NotB1, &b_L1_BPTX_TRIG2_B2NotB1);
//   fChain->SetBranchAddress("L1_BPTX_TRIG2_NotOR", &L1_BPTX_TRIG2_NotOR, &b_L1_BPTX_TRIG2_NotOR);
//   fChain->SetBranchAddress("L1_BRIL_TRIG0_AND", &L1_BRIL_TRIG0_AND, &b_L1_BRIL_TRIG0_AND);
//   fChain->SetBranchAddress("L1_BRIL_TRIG0_FstBunchInTrain", &L1_BRIL_TRIG0_FstBunchInTrain, &b_L1_BRIL_TRIG0_FstBunchInTrain);
//   fChain->SetBranchAddress("L1_BRIL_TRIG0_OR", &L1_BRIL_TRIG0_OR, &b_L1_BRIL_TRIG0_OR);
//   fChain->SetBranchAddress("L1_BRIL_TRIG0_delayedAND", &L1_BRIL_TRIG0_delayedAND, &b_L1_BRIL_TRIG0_delayedAND);
//   fChain->SetBranchAddress("L1_BRIL_TRIG3_AND", &L1_BRIL_TRIG3_AND, &b_L1_BRIL_TRIG3_AND);
//   fChain->SetBranchAddress("L1_BRIL_TRIG3_delayedAND", &L1_BRIL_TRIG3_delayedAND, &b_L1_BRIL_TRIG3_delayedAND);
//   fChain->SetBranchAddress("L1_BRIL_TRIG3_ref", &L1_BRIL_TRIG3_ref, &b_L1_BRIL_TRIG3_ref);
//   fChain->SetBranchAddress("L1_BeamGasB1", &L1_BeamGasB1, &b_L1_BeamGasB1);
//   fChain->SetBranchAddress("L1_BeamGasB2", &L1_BeamGasB2, &b_L1_BeamGasB2);
//   fChain->SetBranchAddress("L1_BeamGasMinus", &L1_BeamGasMinus, &b_L1_BeamGasMinus);
//   fChain->SetBranchAddress("L1_BeamGasPlus", &L1_BeamGasPlus, &b_L1_BeamGasPlus);
//   fChain->SetBranchAddress("L1_BptxMinus", &L1_BptxMinus, &b_L1_BptxMinus);
//   fChain->SetBranchAddress("L1_BptxOR", &L1_BptxOR, &b_L1_BptxOR);
//   fChain->SetBranchAddress("L1_BptxPlus", &L1_BptxPlus, &b_L1_BptxPlus);
//   fChain->SetBranchAddress("L1_BptxXOR", &L1_BptxXOR, &b_L1_BptxXOR);
//   fChain->SetBranchAddress("L1_DoubleEG6_HTT255", &L1_DoubleEG6_HTT255, &b_L1_DoubleEG6_HTT255);
//   fChain->SetBranchAddress("L1_DoubleEG_15_10", &L1_DoubleEG_15_10, &b_L1_DoubleEG_15_10);
//   fChain->SetBranchAddress("L1_DoubleEG_18_17", &L1_DoubleEG_18_17, &b_L1_DoubleEG_18_17);
//   fChain->SetBranchAddress("L1_DoubleEG_20_18", &L1_DoubleEG_20_18, &b_L1_DoubleEG_20_18);
//   fChain->SetBranchAddress("L1_DoubleEG_22_10", &L1_DoubleEG_22_10, &b_L1_DoubleEG_22_10);
//   fChain->SetBranchAddress("L1_DoubleEG_22_12", &L1_DoubleEG_22_12, &b_L1_DoubleEG_22_12);
//   fChain->SetBranchAddress("L1_DoubleEG_22_15", &L1_DoubleEG_22_15, &b_L1_DoubleEG_22_15);
//   fChain->SetBranchAddress("L1_DoubleEG_23_10", &L1_DoubleEG_23_10, &b_L1_DoubleEG_23_10);
//   fChain->SetBranchAddress("L1_DoubleEG_24_17", &L1_DoubleEG_24_17, &b_L1_DoubleEG_24_17);
//   fChain->SetBranchAddress("L1_DoubleIsoTau28er", &L1_DoubleIsoTau28er, &b_L1_DoubleIsoTau28er);
//   fChain->SetBranchAddress("L1_DoubleIsoTau30er", &L1_DoubleIsoTau30er, &b_L1_DoubleIsoTau30er);
//   fChain->SetBranchAddress("L1_DoubleIsoTau32er", &L1_DoubleIsoTau32er, &b_L1_DoubleIsoTau32er);
//   fChain->SetBranchAddress("L1_DoubleIsoTau33er", &L1_DoubleIsoTau33er, &b_L1_DoubleIsoTau33er);
//   fChain->SetBranchAddress("L1_DoubleIsoTau34er", &L1_DoubleIsoTau34er, &b_L1_DoubleIsoTau34er);
//   fChain->SetBranchAddress("L1_DoubleIsoTau35er", &L1_DoubleIsoTau35er, &b_L1_DoubleIsoTau35er);
//   fChain->SetBranchAddress("L1_DoubleJet12_ForwardBackward", &L1_DoubleJet12_ForwardBackward, &b_L1_DoubleJet12_ForwardBackward);
//   fChain->SetBranchAddress("L1_DoubleJet16_ForwardBackward", &L1_DoubleJet16_ForwardBackward, &b_L1_DoubleJet16_ForwardBackward);
//   fChain->SetBranchAddress("L1_DoubleJet8_ForwardBackward", &L1_DoubleJet8_ForwardBackward, &b_L1_DoubleJet8_ForwardBackward);
//   fChain->SetBranchAddress("L1_DoubleJetC100", &L1_DoubleJetC100, &b_L1_DoubleJetC100);
//   fChain->SetBranchAddress("L1_DoubleJetC112", &L1_DoubleJetC112, &b_L1_DoubleJetC112);
//   fChain->SetBranchAddress("L1_DoubleJetC120", &L1_DoubleJetC120, &b_L1_DoubleJetC120);
//   fChain->SetBranchAddress("L1_DoubleJetC40", &L1_DoubleJetC40, &b_L1_DoubleJetC40);
//   fChain->SetBranchAddress("L1_DoubleJetC50", &L1_DoubleJetC50, &b_L1_DoubleJetC50);
//   fChain->SetBranchAddress("L1_DoubleJetC60", &L1_DoubleJetC60, &b_L1_DoubleJetC60);
//   fChain->SetBranchAddress("L1_DoubleJetC60_ETM60", &L1_DoubleJetC60_ETM60, &b_L1_DoubleJetC60_ETM60);
//   fChain->SetBranchAddress("L1_DoubleJetC80", &L1_DoubleJetC80, &b_L1_DoubleJetC80);
//   fChain->SetBranchAddress("L1_DoubleMu0", &L1_DoubleMu0, &b_L1_DoubleMu0);
//   fChain->SetBranchAddress("L1_DoubleMu0_ETM40", &L1_DoubleMu0_ETM40, &b_L1_DoubleMu0_ETM40);
//   fChain->SetBranchAddress("L1_DoubleMu0_ETM55", &L1_DoubleMu0_ETM55, &b_L1_DoubleMu0_ETM55);
//   fChain->SetBranchAddress("L1_DoubleMu0er1p25_dEta_Max1p8_OS", &L1_DoubleMu0er1p25_dEta_Max1p8_OS, &b_L1_DoubleMu0er1p25_dEta_Max1p8_OS);
//   fChain->SetBranchAddress("L1_DoubleMu0er1p6_dEta_Max1p8", &L1_DoubleMu0er1p6_dEta_Max1p8, &b_L1_DoubleMu0er1p6_dEta_Max1p8);
//   fChain->SetBranchAddress("L1_DoubleMu0er1p6_dEta_Max1p8_OS", &L1_DoubleMu0er1p6_dEta_Max1p8_OS, &b_L1_DoubleMu0er1p6_dEta_Max1p8_OS);
//   fChain->SetBranchAddress("L1_DoubleMu7_EG14", &L1_DoubleMu7_EG14, &b_L1_DoubleMu7_EG14);
//   fChain->SetBranchAddress("L1_DoubleMu7_EG7", &L1_DoubleMu7_EG7, &b_L1_DoubleMu7_EG7);
//   fChain->SetBranchAddress("L1_DoubleMuOpen", &L1_DoubleMuOpen, &b_L1_DoubleMuOpen);
//   fChain->SetBranchAddress("L1_DoubleMu_10_0_dEta_Max1p8", &L1_DoubleMu_10_0_dEta_Max1p8, &b_L1_DoubleMu_10_0_dEta_Max1p8);
//   fChain->SetBranchAddress("L1_DoubleMu_10_3p5", &L1_DoubleMu_10_3p5, &b_L1_DoubleMu_10_3p5);
//   fChain->SetBranchAddress("L1_DoubleMu_10_Open", &L1_DoubleMu_10_Open, &b_L1_DoubleMu_10_Open);
//   fChain->SetBranchAddress("L1_DoubleMu_11_4", &L1_DoubleMu_11_4, &b_L1_DoubleMu_11_4);
//   fChain->SetBranchAddress("L1_DoubleMu_12_5", &L1_DoubleMu_12_5, &b_L1_DoubleMu_12_5);
//   fChain->SetBranchAddress("L1_DoubleMu_12_8", &L1_DoubleMu_12_8, &b_L1_DoubleMu_12_8);
//   fChain->SetBranchAddress("L1_DoubleMu_13_6", &L1_DoubleMu_13_6, &b_L1_DoubleMu_13_6);
//   fChain->SetBranchAddress("L1_DoubleMu_15_5", &L1_DoubleMu_15_5, &b_L1_DoubleMu_15_5);
//   fChain->SetBranchAddress("L1_DoubleTau50er", &L1_DoubleTau50er, &b_L1_DoubleTau50er);
//   fChain->SetBranchAddress("L1_EG25er_HTT125", &L1_EG25er_HTT125, &b_L1_EG25er_HTT125);
//   fChain->SetBranchAddress("L1_EG27er_HTT200", &L1_EG27er_HTT200, &b_L1_EG27er_HTT200);
//   fChain->SetBranchAddress("L1_ETM100", &L1_ETM100, &b_L1_ETM100);
//   fChain->SetBranchAddress("L1_ETM120", &L1_ETM120, &b_L1_ETM120);
//   fChain->SetBranchAddress("L1_ETM30", &L1_ETM30, &b_L1_ETM30);
//   fChain->SetBranchAddress("L1_ETM40", &L1_ETM40, &b_L1_ETM40);
//   fChain->SetBranchAddress("L1_ETM50", &L1_ETM50, &b_L1_ETM50);
//   fChain->SetBranchAddress("L1_ETM60", &L1_ETM60, &b_L1_ETM60);
//   fChain->SetBranchAddress("L1_ETM60_Jet60_dPhi_Min0p4", &L1_ETM60_Jet60_dPhi_Min0p4, &b_L1_ETM60_Jet60_dPhi_Min0p4);
//   fChain->SetBranchAddress("L1_ETM70", &L1_ETM70, &b_L1_ETM70);
//   fChain->SetBranchAddress("L1_ETM70_Jet60_dPhi_Min0p4", &L1_ETM70_Jet60_dPhi_Min0p4, &b_L1_ETM70_Jet60_dPhi_Min0p4);
//   fChain->SetBranchAddress("L1_ETM80", &L1_ETM80, &b_L1_ETM80);
//   fChain->SetBranchAddress("L1_ETM90", &L1_ETM90, &b_L1_ETM90);
//   fChain->SetBranchAddress("L1_ETT25", &L1_ETT25, &b_L1_ETT25);
//   fChain->SetBranchAddress("L1_ETT25_BptxAND", &L1_ETT25_BptxAND, &b_L1_ETT25_BptxAND);
//   fChain->SetBranchAddress("L1_ETT35_BptxAND", &L1_ETT35_BptxAND, &b_L1_ETT35_BptxAND);
//   fChain->SetBranchAddress("L1_ETT50_BptxAND", &L1_ETT50_BptxAND, &b_L1_ETT50_BptxAND);
//   fChain->SetBranchAddress("L1_ETT60_BptxAND", &L1_ETT60_BptxAND, &b_L1_ETT60_BptxAND);
//   fChain->SetBranchAddress("L1_HTM100", &L1_HTM100, &b_L1_HTM100);
//   fChain->SetBranchAddress("L1_HTM120", &L1_HTM120, &b_L1_HTM120);
//   fChain->SetBranchAddress("L1_HTM130", &L1_HTM130, &b_L1_HTM130);
//   fChain->SetBranchAddress("L1_HTM140", &L1_HTM140, &b_L1_HTM140);
//   fChain->SetBranchAddress("L1_HTM150", &L1_HTM150, &b_L1_HTM150);
//   fChain->SetBranchAddress("L1_HTM50", &L1_HTM50, &b_L1_HTM50);
//   fChain->SetBranchAddress("L1_HTM60_HTT260", &L1_HTM60_HTT260, &b_L1_HTM60_HTT260);
//   fChain->SetBranchAddress("L1_HTM70", &L1_HTM70, &b_L1_HTM70);
//   fChain->SetBranchAddress("L1_HTM80", &L1_HTM80, &b_L1_HTM80);
//   fChain->SetBranchAddress("L1_HTM80_HTT220", &L1_HTM80_HTT220, &b_L1_HTM80_HTT220);
//   fChain->SetBranchAddress("L1_HTT120", &L1_HTT120, &b_L1_HTT120);
//   fChain->SetBranchAddress("L1_HTT160", &L1_HTT160, &b_L1_HTT160);
//   fChain->SetBranchAddress("L1_HTT200", &L1_HTT200, &b_L1_HTT200);
//   fChain->SetBranchAddress("L1_HTT220", &L1_HTT220, &b_L1_HTT220);
//   fChain->SetBranchAddress("L1_HTT240", &L1_HTT240, &b_L1_HTT240);
//   fChain->SetBranchAddress("L1_HTT255", &L1_HTT255, &b_L1_HTT255);
//   fChain->SetBranchAddress("L1_HTT270", &L1_HTT270, &b_L1_HTT270);
//   fChain->SetBranchAddress("L1_HTT280", &L1_HTT280, &b_L1_HTT280);
//   fChain->SetBranchAddress("L1_HTT300", &L1_HTT300, &b_L1_HTT300);
//   fChain->SetBranchAddress("L1_HTT320", &L1_HTT320, &b_L1_HTT320);
//   fChain->SetBranchAddress("L1_IsoEG18er_IsoTau24er_dEta_Min0p2", &L1_IsoEG18er_IsoTau24er_dEta_Min0p2, &b_L1_IsoEG18er_IsoTau24er_dEta_Min0p2);
//   fChain->SetBranchAddress("L1_IsoEG20er_IsoTau25er_dEta_Min0p2", &L1_IsoEG20er_IsoTau25er_dEta_Min0p2, &b_L1_IsoEG20er_IsoTau25er_dEta_Min0p2);
//   fChain->SetBranchAddress("L1_IsoEG22er_IsoTau26er_dEta_Min0p2", &L1_IsoEG22er_IsoTau26er_dEta_Min0p2, &b_L1_IsoEG22er_IsoTau26er_dEta_Min0p2);
//   fChain->SetBranchAddress("L1_IsoEG22er_Tau20er_dEta_Min0p2", &L1_IsoEG22er_Tau20er_dEta_Min0p2, &b_L1_IsoEG22er_Tau20er_dEta_Min0p2);
//   fChain->SetBranchAddress("L1_IsolatedBunch", &L1_IsolatedBunch, &b_L1_IsolatedBunch);
//   fChain->SetBranchAddress("L1_Jet32_DoubleMu_10_0_dPhi_Jet_Mu0_Max0p4_dPhi_Mu_Mu_Min1p0", &L1_Jet32_DoubleMu_10_0_dPhi_Jet_Mu0_Max0p4_dPhi_Mu_Mu_Min1p0, &b_L1_Jet32_DoubleMu_10_0_dPhi_Jet_Mu0_Max0p4_dPhi_Mu_Mu_Min1p0);
//   fChain->SetBranchAddress("L1_Jet32_Mu0_EG10_dPhi_Jet_Mu_Max0p4_dPhi_Mu_EG_Min1p0", &L1_Jet32_Mu0_EG10_dPhi_Jet_Mu_Max0p4_dPhi_Mu_EG_Min1p0, &b_L1_Jet32_Mu0_EG10_dPhi_Jet_Mu_Max0p4_dPhi_Mu_EG_Min1p0);
//   fChain->SetBranchAddress("L1_MU20_EG15", &L1_MU20_EG15, &b_L1_MU20_EG15);
//   fChain->SetBranchAddress("L1_MinimumBiasHF0_AND", &L1_MinimumBiasHF0_AND, &b_L1_MinimumBiasHF0_AND);
//   fChain->SetBranchAddress("L1_MinimumBiasHF0_AND_BptxAND", &L1_MinimumBiasHF0_AND_BptxAND, &b_L1_MinimumBiasHF0_AND_BptxAND);
//   fChain->SetBranchAddress("L1_MinimumBiasHF0_OR", &L1_MinimumBiasHF0_OR, &b_L1_MinimumBiasHF0_OR);
//   fChain->SetBranchAddress("L1_MinimumBiasHF0_OR_BptxAND", &L1_MinimumBiasHF0_OR_BptxAND, &b_L1_MinimumBiasHF0_OR_BptxAND);
//   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND", &L1_MinimumBiasHF1_AND, &b_L1_MinimumBiasHF1_AND);
//   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND_BptxAND", &L1_MinimumBiasHF1_AND_BptxAND, &b_L1_MinimumBiasHF1_AND_BptxAND);
//   fChain->SetBranchAddress("L1_MinimumBiasHF1_OR", &L1_MinimumBiasHF1_OR, &b_L1_MinimumBiasHF1_OR);
//   fChain->SetBranchAddress("L1_MinimumBiasHF1_OR_BptxAND", &L1_MinimumBiasHF1_OR_BptxAND, &b_L1_MinimumBiasHF1_OR_BptxAND);
//   fChain->SetBranchAddress("L1_Mu0er_ETM40", &L1_Mu0er_ETM40, &b_L1_Mu0er_ETM40);
//   fChain->SetBranchAddress("L1_Mu0er_ETM55", &L1_Mu0er_ETM55, &b_L1_Mu0er_ETM55);
//   fChain->SetBranchAddress("L1_Mu10er_ETM30", &L1_Mu10er_ETM30, &b_L1_Mu10er_ETM30);
//   fChain->SetBranchAddress("L1_Mu10er_ETM50", &L1_Mu10er_ETM50, &b_L1_Mu10er_ETM50);
//   fChain->SetBranchAddress("L1_Mu12_EG10", &L1_Mu12_EG10, &b_L1_Mu12_EG10);
//   fChain->SetBranchAddress("L1_Mu14er_ETM30", &L1_Mu14er_ETM30, &b_L1_Mu14er_ETM30);
//   fChain->SetBranchAddress("L1_Mu16er_Tau20er", &L1_Mu16er_Tau20er, &b_L1_Mu16er_Tau20er);
//   fChain->SetBranchAddress("L1_Mu16er_Tau24er", &L1_Mu16er_Tau24er, &b_L1_Mu16er_Tau24er);
//   fChain->SetBranchAddress("L1_Mu18er_IsoTau26er", &L1_Mu18er_IsoTau26er, &b_L1_Mu18er_IsoTau26er);
//   fChain->SetBranchAddress("L1_Mu18er_Tau20er", &L1_Mu18er_Tau20er, &b_L1_Mu18er_Tau20er);
//   fChain->SetBranchAddress("L1_Mu18er_Tau24er", &L1_Mu18er_Tau24er, &b_L1_Mu18er_Tau24er);
//   fChain->SetBranchAddress("L1_Mu20_EG10", &L1_Mu20_EG10, &b_L1_Mu20_EG10);
//   fChain->SetBranchAddress("L1_Mu20_EG17", &L1_Mu20_EG17, &b_L1_Mu20_EG17);
//   fChain->SetBranchAddress("L1_Mu20er_IsoTau26er", &L1_Mu20er_IsoTau26er, &b_L1_Mu20er_IsoTau26er);
//   fChain->SetBranchAddress("L1_Mu23_EG10", &L1_Mu23_EG10, &b_L1_Mu23_EG10);
//   fChain->SetBranchAddress("L1_Mu23_IsoEG10", &L1_Mu23_IsoEG10, &b_L1_Mu23_IsoEG10);
//   fChain->SetBranchAddress("L1_Mu3_JetC120", &L1_Mu3_JetC120, &b_L1_Mu3_JetC120);
//   fChain->SetBranchAddress("L1_Mu3_JetC120_dEta_Max0p4_dPhi_Max0p4", &L1_Mu3_JetC120_dEta_Max0p4_dPhi_Max0p4, &b_L1_Mu3_JetC120_dEta_Max0p4_dPhi_Max0p4);
//   fChain->SetBranchAddress("L1_Mu3_JetC16", &L1_Mu3_JetC16, &b_L1_Mu3_JetC16);
//   fChain->SetBranchAddress("L1_Mu3_JetC16_dEta_Max0p4_dPhi_Max0p4", &L1_Mu3_JetC16_dEta_Max0p4_dPhi_Max0p4, &b_L1_Mu3_JetC16_dEta_Max0p4_dPhi_Max0p4);
//   fChain->SetBranchAddress("L1_Mu3_JetC60", &L1_Mu3_JetC60, &b_L1_Mu3_JetC60);
//   fChain->SetBranchAddress("L1_Mu3_JetC60_dEta_Max0p4_dPhi_Max0p4", &L1_Mu3_JetC60_dEta_Max0p4_dPhi_Max0p4, &b_L1_Mu3_JetC60_dEta_Max0p4_dPhi_Max0p4);
//   fChain->SetBranchAddress("L1_Mu5_EG15", &L1_Mu5_EG15, &b_L1_Mu5_EG15);
//   fChain->SetBranchAddress("L1_Mu5_EG20", &L1_Mu5_EG20, &b_L1_Mu5_EG20);
//   fChain->SetBranchAddress("L1_Mu5_EG23", &L1_Mu5_EG23, &b_L1_Mu5_EG23);
//   fChain->SetBranchAddress("L1_Mu5_IsoEG18", &L1_Mu5_IsoEG18, &b_L1_Mu5_IsoEG18);
//   fChain->SetBranchAddress("L1_Mu5_IsoEG20", &L1_Mu5_IsoEG20, &b_L1_Mu5_IsoEG20);
//   fChain->SetBranchAddress("L1_Mu6_DoubleEG10", &L1_Mu6_DoubleEG10, &b_L1_Mu6_DoubleEG10);
//   fChain->SetBranchAddress("L1_Mu6_DoubleEG17", &L1_Mu6_DoubleEG17, &b_L1_Mu6_DoubleEG17);
//   fChain->SetBranchAddress("L1_Mu6_HTT200", &L1_Mu6_HTT200, &b_L1_Mu6_HTT200);
//   fChain->SetBranchAddress("L1_Mu8_HTT150", &L1_Mu8_HTT150, &b_L1_Mu8_HTT150);
//   fChain->SetBranchAddress("L1_NotBptxOR", &L1_NotBptxOR, &b_L1_NotBptxOR);
//   fChain->SetBranchAddress("L1_QuadJetC36_Tau52", &L1_QuadJetC36_Tau52, &b_L1_QuadJetC36_Tau52);
//   fChain->SetBranchAddress("L1_QuadJetC40", &L1_QuadJetC40, &b_L1_QuadJetC40);
//   fChain->SetBranchAddress("L1_QuadJetC50", &L1_QuadJetC50, &b_L1_QuadJetC50);
//   fChain->SetBranchAddress("L1_QuadJetC60", &L1_QuadJetC60, &b_L1_QuadJetC60);
//   fChain->SetBranchAddress("L1_QuadMu0", &L1_QuadMu0, &b_L1_QuadMu0);
//   fChain->SetBranchAddress("L1_SingleEG10", &L1_SingleEG10, &b_L1_SingleEG10);
//   fChain->SetBranchAddress("L1_SingleEG15", &L1_SingleEG15, &b_L1_SingleEG15);
//   fChain->SetBranchAddress("L1_SingleEG18", &L1_SingleEG18, &b_L1_SingleEG18);
//   fChain->SetBranchAddress("L1_SingleEG24", &L1_SingleEG24, &b_L1_SingleEG24);
//   fChain->SetBranchAddress("L1_SingleEG26", &L1_SingleEG26, &b_L1_SingleEG26);
//   fChain->SetBranchAddress("L1_SingleEG28", &L1_SingleEG28, &b_L1_SingleEG28);
//   fChain->SetBranchAddress("L1_SingleEG2_BptxAND", &L1_SingleEG2_BptxAND, &b_L1_SingleEG2_BptxAND);
//   fChain->SetBranchAddress("L1_SingleEG30", &L1_SingleEG30, &b_L1_SingleEG30);
//   fChain->SetBranchAddress("L1_SingleEG32", &L1_SingleEG32, &b_L1_SingleEG32);
//   fChain->SetBranchAddress("L1_SingleEG34", &L1_SingleEG34, &b_L1_SingleEG34);
//   fChain->SetBranchAddress("L1_SingleEG36", &L1_SingleEG36, &b_L1_SingleEG36);
//   fChain->SetBranchAddress("L1_SingleEG38", &L1_SingleEG38, &b_L1_SingleEG38);
//   fChain->SetBranchAddress("L1_SingleEG40", &L1_SingleEG40, &b_L1_SingleEG40);
//   fChain->SetBranchAddress("L1_SingleEG45", &L1_SingleEG45, &b_L1_SingleEG45);
//   fChain->SetBranchAddress("L1_SingleEG5", &L1_SingleEG5, &b_L1_SingleEG5);
//   fChain->SetBranchAddress("L1_SingleIsoEG18", &L1_SingleIsoEG18, &b_L1_SingleIsoEG18);
//   fChain->SetBranchAddress("L1_SingleIsoEG18er", &L1_SingleIsoEG18er, &b_L1_SingleIsoEG18er);
//   fChain->SetBranchAddress("L1_SingleIsoEG20", &L1_SingleIsoEG20, &b_L1_SingleIsoEG20);
//   fChain->SetBranchAddress("L1_SingleIsoEG20er", &L1_SingleIsoEG20er, &b_L1_SingleIsoEG20er);
//   fChain->SetBranchAddress("L1_SingleIsoEG22", &L1_SingleIsoEG22, &b_L1_SingleIsoEG22);
//   fChain->SetBranchAddress("L1_SingleIsoEG22er", &L1_SingleIsoEG22er, &b_L1_SingleIsoEG22er);
//   fChain->SetBranchAddress("L1_SingleIsoEG24", &L1_SingleIsoEG24, &b_L1_SingleIsoEG24);
//   fChain->SetBranchAddress("L1_SingleIsoEG24er", &L1_SingleIsoEG24er, &b_L1_SingleIsoEG24er);
//   fChain->SetBranchAddress("L1_SingleIsoEG26", &L1_SingleIsoEG26, &b_L1_SingleIsoEG26);
//   fChain->SetBranchAddress("L1_SingleIsoEG26er", &L1_SingleIsoEG26er, &b_L1_SingleIsoEG26er);
//   fChain->SetBranchAddress("L1_SingleIsoEG28", &L1_SingleIsoEG28, &b_L1_SingleIsoEG28);
//   fChain->SetBranchAddress("L1_SingleIsoEG28er", &L1_SingleIsoEG28er, &b_L1_SingleIsoEG28er);
//   fChain->SetBranchAddress("L1_SingleIsoEG30", &L1_SingleIsoEG30, &b_L1_SingleIsoEG30);
//   fChain->SetBranchAddress("L1_SingleIsoEG30er", &L1_SingleIsoEG30er, &b_L1_SingleIsoEG30er);
//   fChain->SetBranchAddress("L1_SingleIsoEG32", &L1_SingleIsoEG32, &b_L1_SingleIsoEG32);
//   fChain->SetBranchAddress("L1_SingleIsoEG32er", &L1_SingleIsoEG32er, &b_L1_SingleIsoEG32er);
//   fChain->SetBranchAddress("L1_SingleIsoEG34", &L1_SingleIsoEG34, &b_L1_SingleIsoEG34);
//   fChain->SetBranchAddress("L1_SingleIsoEG34er", &L1_SingleIsoEG34er, &b_L1_SingleIsoEG34er);
//   fChain->SetBranchAddress("L1_SingleIsoEG36", &L1_SingleIsoEG36, &b_L1_SingleIsoEG36);
//   fChain->SetBranchAddress("L1_SingleJet120", &L1_SingleJet120, &b_L1_SingleJet120);
//   fChain->SetBranchAddress("L1_SingleJet12_BptxAND", &L1_SingleJet12_BptxAND, &b_L1_SingleJet12_BptxAND);
//   fChain->SetBranchAddress("L1_SingleJet140", &L1_SingleJet140, &b_L1_SingleJet140);
//   fChain->SetBranchAddress("L1_SingleJet150", &L1_SingleJet150, &b_L1_SingleJet150);
//   fChain->SetBranchAddress("L1_SingleJet16", &L1_SingleJet16, &b_L1_SingleJet16);
//   fChain->SetBranchAddress("L1_SingleJet160", &L1_SingleJet160, &b_L1_SingleJet160);
//   fChain->SetBranchAddress("L1_SingleJet170", &L1_SingleJet170, &b_L1_SingleJet170);
//   fChain->SetBranchAddress("L1_SingleJet180", &L1_SingleJet180, &b_L1_SingleJet180);
//   fChain->SetBranchAddress("L1_SingleJet20", &L1_SingleJet20, &b_L1_SingleJet20);
//   fChain->SetBranchAddress("L1_SingleJet200", &L1_SingleJet200, &b_L1_SingleJet200);
//   fChain->SetBranchAddress("L1_SingleJet35", &L1_SingleJet35, &b_L1_SingleJet35);
//   fChain->SetBranchAddress("L1_SingleJet60", &L1_SingleJet60, &b_L1_SingleJet60);
//   fChain->SetBranchAddress("L1_SingleJet8_BptxAND", &L1_SingleJet8_BptxAND, &b_L1_SingleJet8_BptxAND);
//   fChain->SetBranchAddress("L1_SingleJet90", &L1_SingleJet90, &b_L1_SingleJet90);
//   fChain->SetBranchAddress("L1_SingleJetC20_NotBptxOR", &L1_SingleJetC20_NotBptxOR, &b_L1_SingleJetC20_NotBptxOR);
//   fChain->SetBranchAddress("L1_SingleJetC20_NotBptxOR_3BX", &L1_SingleJetC20_NotBptxOR_3BX, &b_L1_SingleJetC20_NotBptxOR_3BX);
//   fChain->SetBranchAddress("L1_SingleJetC32_NotBptxOR", &L1_SingleJetC32_NotBptxOR, &b_L1_SingleJetC32_NotBptxOR);
//   fChain->SetBranchAddress("L1_SingleJetC32_NotBptxOR_3BX", &L1_SingleJetC32_NotBptxOR_3BX, &b_L1_SingleJetC32_NotBptxOR_3BX);
//   fChain->SetBranchAddress("L1_SingleJetC36_NotBptxOR_3BX", &L1_SingleJetC36_NotBptxOR_3BX, &b_L1_SingleJetC36_NotBptxOR_3BX);
//   fChain->SetBranchAddress("L1_SingleMu10_LowQ", &L1_SingleMu10_LowQ, &b_L1_SingleMu10_LowQ);
//   fChain->SetBranchAddress("L1_SingleMu12", &L1_SingleMu12, &b_L1_SingleMu12);
//   fChain->SetBranchAddress("L1_SingleMu14", &L1_SingleMu14, &b_L1_SingleMu14);
//   fChain->SetBranchAddress("L1_SingleMu14er", &L1_SingleMu14er, &b_L1_SingleMu14er);
//   fChain->SetBranchAddress("L1_SingleMu16", &L1_SingleMu16, &b_L1_SingleMu16);
//   fChain->SetBranchAddress("L1_SingleMu16er", &L1_SingleMu16er, &b_L1_SingleMu16er);
//   fChain->SetBranchAddress("L1_SingleMu18", &L1_SingleMu18, &b_L1_SingleMu18);
//   fChain->SetBranchAddress("L1_SingleMu18er", &L1_SingleMu18er, &b_L1_SingleMu18er);
//   fChain->SetBranchAddress("L1_SingleMu20", &L1_SingleMu20, &b_L1_SingleMu20);
//   fChain->SetBranchAddress("L1_SingleMu20er", &L1_SingleMu20er, &b_L1_SingleMu20er);
//   fChain->SetBranchAddress("L1_SingleMu22", &L1_SingleMu22, &b_L1_SingleMu22);
//   fChain->SetBranchAddress("L1_SingleMu22er", &L1_SingleMu22er, &b_L1_SingleMu22er);
//   fChain->SetBranchAddress("L1_SingleMu25", &L1_SingleMu25, &b_L1_SingleMu25);
//   fChain->SetBranchAddress("L1_SingleMu25er", &L1_SingleMu25er, &b_L1_SingleMu25er);
//   fChain->SetBranchAddress("L1_SingleMu3", &L1_SingleMu3, &b_L1_SingleMu3);
//   fChain->SetBranchAddress("L1_SingleMu30", &L1_SingleMu30, &b_L1_SingleMu30);
//   fChain->SetBranchAddress("L1_SingleMu30er", &L1_SingleMu30er, &b_L1_SingleMu30er);
//   fChain->SetBranchAddress("L1_SingleMu5", &L1_SingleMu5, &b_L1_SingleMu5);
//   fChain->SetBranchAddress("L1_SingleMu7", &L1_SingleMu7, &b_L1_SingleMu7);
//   fChain->SetBranchAddress("L1_SingleMuCosmics", &L1_SingleMuCosmics, &b_L1_SingleMuCosmics);
//   fChain->SetBranchAddress("L1_SingleMuOpen", &L1_SingleMuOpen, &b_L1_SingleMuOpen);
//   fChain->SetBranchAddress("L1_SingleMuOpen_NotBptxOR", &L1_SingleMuOpen_NotBptxOR, &b_L1_SingleMuOpen_NotBptxOR);
//   fChain->SetBranchAddress("L1_SingleMuOpen_NotBptxOR_3BX", &L1_SingleMuOpen_NotBptxOR_3BX, &b_L1_SingleMuOpen_NotBptxOR_3BX);
//   fChain->SetBranchAddress("L1_SingleTau100er", &L1_SingleTau100er, &b_L1_SingleTau100er);
//   fChain->SetBranchAddress("L1_SingleTau120er", &L1_SingleTau120er, &b_L1_SingleTau120er);
//   fChain->SetBranchAddress("L1_SingleTau80er", &L1_SingleTau80er, &b_L1_SingleTau80er);
//   fChain->SetBranchAddress("L1_TripleEG_14_10_8", &L1_TripleEG_14_10_8, &b_L1_TripleEG_14_10_8);
//   fChain->SetBranchAddress("L1_TripleEG_18_17_8", &L1_TripleEG_18_17_8, &b_L1_TripleEG_18_17_8);
//   fChain->SetBranchAddress("L1_TripleJet_84_68_48_VBF", &L1_TripleJet_84_68_48_VBF, &b_L1_TripleJet_84_68_48_VBF);
//   fChain->SetBranchAddress("L1_TripleJet_88_72_56_VBF", &L1_TripleJet_88_72_56_VBF, &b_L1_TripleJet_88_72_56_VBF);
//   fChain->SetBranchAddress("L1_TripleJet_92_76_64_VBF", &L1_TripleJet_92_76_64_VBF, &b_L1_TripleJet_92_76_64_VBF);
//   fChain->SetBranchAddress("L1_TripleMu0", &L1_TripleMu0, &b_L1_TripleMu0);
//   fChain->SetBranchAddress("L1_TripleMu_5_5_3", &L1_TripleMu_5_5_3, &b_L1_TripleMu_5_5_3);
//   fChain->SetBranchAddress("L1_ZeroBias", &L1_ZeroBias, &b_L1_ZeroBias);
//   fChain->SetBranchAddress("L1_ZeroBias_FirstCollidingBunch", &L1_ZeroBias_FirstCollidingBunch, &b_L1_ZeroBias_FirstCollidingBunch);
//   fChain->SetBranchAddress("L1_ZeroBias_copy", &L1_ZeroBias_copy, &b_L1_ZeroBias_copy);
//   fChain->SetBranchAddress("HLT_Ele20_eta2p1_WPLoose_Gsf_LooseIsoPFTau28", &HLT_Ele20_eta2p1_WPLoose_Gsf_LooseIsoPFTau28, &b_HLT_Ele20_eta2p1_WPLoose_Gsf_LooseIsoPFTau28);
//   fChain->SetBranchAddress("HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau29", &HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau29, &b_HLT_Ele22_eta2p1_WPLoose_Gsf_LooseIsoPFTau29);
//   fChain->SetBranchAddress("HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1", &HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1, &b_HLT_Ele36_eta2p1_WPLoose_Gsf_LooseIsoPFTau20_SingleL1);
//   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
//   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
//   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
//   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
//   fChain->SetBranchAddress("HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL", &HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL, &b_HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL);
//   fChain->SetBranchAddress("HLT_Rsq0p02_MR400_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200", &HLT_Rsq0p02_MR400_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200, &b_HLT_Rsq0p02_MR400_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200);
//   fChain->SetBranchAddress("HLT_Rsq0p02_MR450_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200", &HLT_Rsq0p02_MR450_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200, &b_HLT_Rsq0p02_MR450_TriPFJet80_60_40_DoubleBTagCSV_p063_Mbb60_200);
//   fChain->SetBranchAddress("L1_DoubleEG_25_12", &L1_DoubleEG_25_12, &b_L1_DoubleEG_25_12);
//   fChain->SetBranchAddress("L1_DoubleIsoTau36er", &L1_DoubleIsoTau36er, &b_L1_DoubleIsoTau36er);
//   fChain->SetBranchAddress("L1_DoubleMu0er1p4_dEta_Max1p8_OS", &L1_DoubleMu0er1p4_dEta_Max1p8_OS, &b_L1_DoubleMu0er1p4_dEta_Max1p8_OS);
//   fChain->SetBranchAddress("L1_ETM75", &L1_ETM75, &b_L1_ETM75);
//   fChain->SetBranchAddress("L1_ETM75_Jet60_dPhi_Min0p4", &L1_ETM75_Jet60_dPhi_Min0p4, &b_L1_ETM75_Jet60_dPhi_Min0p4);
//   fChain->SetBranchAddress("L1_ETM85", &L1_ETM85, &b_L1_ETM85);
//   fChain->SetBranchAddress("L1_ETM95", &L1_ETM95, &b_L1_ETM95);
//   fChain->SetBranchAddress("L1_Mu20_IsoEG6", &L1_Mu20_IsoEG6, &b_L1_Mu20_IsoEG6);
//   fChain->SetBranchAddress("L1_Mu22er_IsoTau26er", &L1_Mu22er_IsoTau26er, &b_L1_Mu22er_IsoTau26er);
//   fChain->SetBranchAddress("L1_Mu25er_IsoTau26er", &L1_Mu25er_IsoTau26er, &b_L1_Mu25er_IsoTau26er);
//   fChain->SetBranchAddress("L1_TripleMu_5_0_0", &L1_TripleMu_5_0_0, &b_L1_TripleMu_5_0_0);
   Notify();
}

Bool_t MET_2016F::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MET_2016F::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MET_2016F::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MET_2016F_cxx

%chk=LICHM_0.chk
%Mem=256MB
%CPU=0-3
#P b3lyp/6-31G* SP Symmetry=None
Charge=angstroms Population=(MK,ReadRadii)

QMMM

0 1
O 0.87400000000000 0.00000000000000 -1.2470000000000
H 0.28800000000000 0.00000000000000 -2.0040000000000
H 0.28800000000000 0.00000000000000 -0.4900000000000

 -0.6491461107357 -0.0000000000000 1.10670672069982 -2.3164233333333
 -0.7537067206998 0.00000000000000 1.26185388926428 0.40595666666666
 -0.7790000000000 0.13229430273000 1.13199999999999 1.93621666666666
 -0.9088538892642 0.00000000000000 1.15729327930017 -2.3164233333333
 -0.8042932793001 -0.0000000000000 1.00214611073571 -0.1652033333333
 -0.7790000000000 -0.1322943027300 1.13199999999999 1.93621666666666
 -0.7968538892642 0.75700000000000 1.73229327930017 -0.5294416666666
 -0.6512968840780 0.86071028804812 1.78761867549229 0.92755301945716
 -0.6471716836797 0.67486621469948 1.80879715968006 -0.2311908520997
 -0.5371461107357 0.75700000000000 1.68170672069982 -0.5294416666666
 -0.6827031159219 0.65328971195187 1.62638132450770 0.69658000365464
 -0.6868283163202 0.83913378530051 1.60520284031993 -0.0742288376787
 -0.7968538892642 -0.7570000000000 1.73229327930017 -0.5294416666666
 -0.6827031159219 -0.6532897119518 1.62638132450770 0.69658000365464
 -0.6471716836797 -0.6748662146994 1.80879715968006 -0.2311908520997
 -0.5371461107357 -0.7570000000000 1.68170672069982 -0.5294416666666
 -0.6512968840780 -0.8607102880481 1.78761867549229 0.92755301945716
 -0.6868283163202 -0.8391337853005 1.60520284031993 -0.0742288376787


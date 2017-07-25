{
//=========Macro generated from canvas: c1/spr_dim
//=========  (Thu Apr 27 18:10:41 2017) by ROOT version5.34/28
   TCanvas *c1 = new TCanvas("c1", "spr_dim",2308,318,800,400);
   c1->Range(-62.5,-23.69231,62.5,173.7436);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(20);
   graph->SetName("t30");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   graph->SetPoint(0,1.094499706,7.17500002);
   graph->SetPoint(1,1.983780983,7.52500002);
   graph->SetPoint(2,2.975671637,8.05000002);
   graph->SetPoint(3,3.967562292,8.57500002);
   graph->SetPoint(4,4.993656073,9.71250002);
   graph->SetPoint(5,5.985546727,10.50000002);
   graph->SetPoint(6,6.977437382,11.02500002);
   graph->SetPoint(7,7.969328036,12.60000002);
   graph->SetPoint(8,8.995421817,13.12500002);
   graph->SetPoint(9,9.987312471,13.73750002);
   graph->SetPoint(10,10.97920313,15.83750002);
   graph->SetPoint(11,11.97109378,16.01250002);
   graph->SetPoint(12,12.99718756,18.81250002);
   graph->SetPoint(13,13.98907822,19.60000002);
   graph->SetPoint(14,14.98096887,19.60000002);
   graph->SetPoint(15,15.97285952,23.88750002);
   graph->SetPoint(16,16.99895331,22.05000002);
   graph->SetPoint(17,17.99084396,25.11250002);
   graph->SetPoint(18,18.98273461,26.42500002);
   graph->SetPoint(19,19.97462527,28.00000002);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","",100,0,21.89);
   Graph_Graph_Graph11->SetMinimum(0);
   Graph_Graph_Graph11->SetMaximum(35);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph11->SetLineColor(ci);
   Graph_Graph_Graph11->GetXaxis()->SetTitle("pixel dimension [mm]");
   Graph_Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph11->GetXaxis()->SetTitleOffset(0.8);
   Graph_Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetTitle("SPR [mrad]");
   Graph_Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph11->GetYaxis()->SetTitleOffset(0.7);
   Graph_Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph11);
   
   graph->Draw("apl");
   
   graph = new TGraph(20);
   graph->SetName("t70");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   graph->SetPoint(0,1.094499706,4.55000002);
   graph->SetPoint(1,1.983780983,4.98750002);
   graph->SetPoint(2,2.975671637,5.77500002);
   graph->SetPoint(3,3.967562292,6.65000002);
   graph->SetPoint(4,4.993656073,7.52500002);
   graph->SetPoint(5,5.985546727,8.31250002);
   graph->SetPoint(6,6.977437382,9.53750002);
   graph->SetPoint(7,7.969328036,9.97500002);
   graph->SetPoint(8,8.995421817,11.81250002);
   graph->SetPoint(9,9.987312471,12.33750002);
   graph->SetPoint(10,10.97920313,13.73750002);
   graph->SetPoint(11,11.97109378,14.35000002);
   graph->SetPoint(12,12.99718756,14.96250002);
   graph->SetPoint(13,13.98907822,16.88750002);
   graph->SetPoint(14,14.98096887,16.71250002);
   graph->SetPoint(15,15.97285952,20.65000002);
   graph->SetPoint(16,16.99895331,18.90000002);
   graph->SetPoint(17,17.99084396,21.70000002);
   graph->SetPoint(18,18.98273461,23.27500002);
   graph->SetPoint(19,19.97462527,25.63750002);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","",100,0,21.89);
   Graph_Graph_Graph22->SetMinimum(0);
   Graph_Graph_Graph22->SetMaximum(30);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->GetXaxis()->SetTitle("sensor dimension [mm]");
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph22->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph22->GetXaxis()->SetTitleOffset(0.76);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetTitle("SPR [mrad]");
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph22->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph22->GetYaxis()->SetTitleOffset(0.7);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph22);
   
   graph->Draw(" pl");
  
   
   graph = new TGraph(20);
   graph->SetName("t110");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineColor(8);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   graph->SetPoint(0,1.094499706,5.16250002);
   graph->SetPoint(1,1.983780983,5.86250002);
   graph->SetPoint(2,2.975671637,6.82500002);
   graph->SetPoint(3,3.967562292,7.61250002);
   graph->SetPoint(4,4.993656073,8.66250002);
   graph->SetPoint(5,5.985546727,8.75000002);
   graph->SetPoint(6,6.977437382,10.23750002);
   graph->SetPoint(7,7.969328036,10.50000002);
   graph->SetPoint(8,8.995421817,12.95000002);
   graph->SetPoint(9,9.987312471,13.03750002);
   graph->SetPoint(10,10.97920313,14.70000002);
   graph->SetPoint(11,11.97109378,16.18750002);
   graph->SetPoint(12,12.99718756,17.23750002);
   graph->SetPoint(13,13.98907822,18.28750002);
   graph->SetPoint(14,14.98096887,17.41250002);
   graph->SetPoint(15,15.97285952,25.02500002);
   graph->SetPoint(16,16.99895331,19.86250002);
   graph->SetPoint(17,17.99084396,24.32500002);
   graph->SetPoint(18,18.98273461,26.16250002);
   graph->SetPoint(19,19.97462527,29.05000002);

   //graph->Fit("expo","Q","",1,20);

   TF1 *fit = new TF1("fit","[0]*TMath::Sqrt(1+x^2/[1]^2)",1,20); //graph->GetFunction("expo");
   fit->SetParameters(5,4);
   fit->SetLineColor(kMagenta+2);
   fit->SetLineStyle(2);
   graph->Fit("fit","Q","",1,20);
   
   
   TH1F *Graph_Graph_Graph33 = new TH1F("Graph_Graph_Graph33","",100,0,21.89);
   Graph_Graph_Graph33->SetMinimum(0);
   Graph_Graph_Graph33->SetMaximum(30);
   Graph_Graph_Graph33->SetDirectory(0);
   Graph_Graph_Graph33->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph33->SetLineColor(ci);
   Graph_Graph_Graph33->GetXaxis()->SetTitle("sensor dimension [mm]");
   Graph_Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph33->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph33->GetXaxis()->SetTitleOffset(0.76);
   Graph_Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetTitle("SPR [mrad]");
   Graph_Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph33->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph33->GetYaxis()->SetTitleOffset(0.7);
   Graph_Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph33->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph33->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph33);
   
   graph->Draw(" pl");
   
   
   graph = new TGraph(20);
   graph->SetName("t150");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetLineColor(4);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.7);
   graph->SetPoint(0,1.1,7.29381827);
   graph->SetPoint(1,2,7.232009441);
   graph->SetPoint(2,3,7.798770243);
   graph->SetPoint(3,4,8.236755654);
   graph->SetPoint(4,5,9.444933653);
   graph->SetPoint(5,6,10.31055277);
   graph->SetPoint(6,7,10.68608291);
   graph->SetPoint(7,8,12.34714969);
   graph->SetPoint(8,9,12.8091363);
   graph->SetPoint(9,10,13.30372556);
   graph->SetPoint(10,11,15.74831525);
   graph->SetPoint(11,12,16.3576225);
   graph->SetPoint(12,13,18.06373154);
   graph->SetPoint(13,14,20.16912621);
   graph->SetPoint(14,15,18.75096553);
   graph->SetPoint(15,16,24.88091108);
   graph->SetPoint(16,17,24.22517435);
   graph->SetPoint(17,17.99084396,28.35000002);
   graph->SetPoint(18,19,31.23278811);
   graph->SetPoint(19,20,33.82777294);
   
   TH1F *Graph_Graph_Graph44 = new TH1F("Graph_Graph_Graph44","",100,0,21.89);
   Graph_Graph_Graph44->SetMinimum(0);
   Graph_Graph_Graph44->SetMaximum(30);
   Graph_Graph_Graph44->SetDirectory(0);
   Graph_Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph44->SetLineColor(ci);
   Graph_Graph_Graph44->GetXaxis()->SetTitle("pixel dimension [mm]");
   Graph_Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph44->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph44->GetXaxis()->SetTitleOffset(0.76);
   Graph_Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph44->GetYaxis()->SetTitle("SPR [mrad]");
   Graph_Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph44->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph44->GetYaxis()->SetTitleOffset(0.7);
   Graph_Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph44->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph44);
   
   graph->Draw(" pl");

     
   TLegend *leg = new TLegend(0.2,0.55,0.55,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("t30","#theta = 30#circ","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(t70,"#theta = 70#circ","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(t110,"#theta = 110#circ","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry(t150,"#theta = 150#circ","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);

   entry=leg->AddEntry(fit,"example fit","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
  
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);

   c1->Print("spr_dimf.eps");
   c1->Print("spr_dimf.png");

   
}

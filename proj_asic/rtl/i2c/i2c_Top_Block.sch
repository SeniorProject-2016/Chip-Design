<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="artix7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_4" />
        <signal name="XLXN_21" />
        <signal name="XLXN_26" />
        <signal name="XLXN_1" />
        <signal name="XLXN_30" />
        <signal name="XLXN_2" />
        <signal name="XLXN_32" />
        <signal name="XLXN_33" />
        <signal name="XLXN_3" />
        <signal name="XLXN_5(10:0)" />
        <signal name="XLXN_6(7:0)" />
        <signal name="i2c_addr_bits(2:0)" />
        <signal name="i2c_op" />
        <signal name="i2c_xfc" />
        <signal name="i2c_addr_out(10:0)" />
        <signal name="i2c_data_out(7:0)" />
        <signal name="Clock" />
        <signal name="Reset" />
        <signal name="XLXN_46" />
        <signal name="XLXN_24" />
        <signal name="XLXN_48" />
        <signal name="XLXN_27" />
        <signal name="XLXN_51" />
        <signal name="XLXN_52" />
        <signal name="XLXN_28" />
        <signal name="i2c_SDA_out" />
        <signal name="i2c_SCL" />
        <signal name="i2c_rdata(7:0)" />
        <signal name="i2c_xfc_read" />
        <signal name="i2c_SDA_in" />
        <signal name="XLXN_60" />
        <signal name="XLXN_61" />
        <signal name="XLXN_63" />
        <signal name="XLXN_64" />
        <signal name="XLXN_65" />
        <signal name="XLXN_67" />
        <signal name="XLXN_68" />
        <port polarity="Input" name="i2c_addr_bits(2:0)" />
        <port polarity="Output" name="i2c_op" />
        <port polarity="Output" name="i2c_xfc" />
        <port polarity="Output" name="i2c_addr_out(10:0)" />
        <port polarity="Output" name="i2c_data_out(7:0)" />
        <port polarity="Input" name="Clock" />
        <port polarity="Input" name="Reset" />
        <port polarity="Output" name="i2c_SDA_out" />
        <port polarity="Input" name="i2c_SCL" />
        <port polarity="Input" name="i2c_rdata(7:0)" />
        <port polarity="Input" name="i2c_xfc_read" />
        <port polarity="Input" name="i2c_SDA_in" />
        <blockdef name="Sequencer">
            <timestamp>2015-11-10T22:27:32</timestamp>
            <rect width="384" x="64" y="-512" height="512" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="512" y1="-480" y2="-480" x1="448" />
            <line x2="512" y1="-336" y2="-336" x1="448" />
            <rect width="64" x="448" y="-204" height="24" />
            <line x2="512" y1="-192" y2="-192" x1="448" />
            <rect width="64" x="448" y="-60" height="24" />
            <line x2="512" y1="-48" y2="-48" x1="448" />
        </blockdef>
        <blockdef name="Deserializer">
            <timestamp>2015-11-10T22:6:44</timestamp>
            <rect width="368" x="64" y="-448" height="448" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-320" y2="-320" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-128" y2="-128" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="496" y1="-416" y2="-416" x1="432" />
            <line x2="496" y1="-352" y2="-352" x1="432" />
            <line x2="496" y1="-288" y2="-288" x1="432" />
            <line x2="496" y1="-224" y2="-224" x1="432" />
            <line x2="496" y1="-160" y2="-160" x1="432" />
            <rect width="64" x="432" y="-108" height="24" />
            <line x2="496" y1="-96" y2="-96" x1="432" />
            <rect width="64" x="432" y="-44" height="24" />
            <line x2="496" y1="-32" y2="-32" x1="432" />
        </blockdef>
        <blockdef name="bufh">
            <timestamp>2008-10-7T15:35:43</timestamp>
            <rect width="256" x="64" y="-64" height="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Serializer">
            <timestamp>2015-11-11T2:10:28</timestamp>
            <rect width="288" x="64" y="-640" height="640" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="416" y1="-608" y2="-608" x1="352" />
        </blockdef>
        <block symbolname="Sequencer" name="XLXI_1">
            <blockpin signalname="XLXN_63" name="Clock" />
            <blockpin signalname="XLXN_1" name="i2c_RW" />
            <blockpin signalname="XLXN_2" name="i2c_addr_ack" />
            <blockpin signalname="XLXN_3" name="i2c_data_ack" />
            <blockpin signalname="XLXN_24" name="reset" />
            <blockpin signalname="XLXN_27" name="stop" />
            <blockpin signalname="XLXN_5(10:0)" name="i2c_addr_in(10:0)" />
            <blockpin signalname="XLXN_6(7:0)" name="i2c_data_in(7:0)" />
            <blockpin signalname="i2c_op" name="i2c_op" />
            <blockpin signalname="i2c_xfc" name="i2c_xfc" />
            <blockpin signalname="i2c_addr_out(10:0)" name="i2c_addr_out(10:0)" />
            <blockpin signalname="i2c_data_out(7:0)" name="i2c_data_out(7:0)" />
        </block>
        <block symbolname="Deserializer" name="XLXI_2">
            <blockpin signalname="XLXN_63" name="Clock" />
            <blockpin signalname="XLXN_24" name="Reset" />
            <blockpin signalname="XLXN_68" name="i2c_sda_raw" />
            <blockpin signalname="XLXN_67" name="i2c_scl_raw" />
            <blockpin signalname="i2c_addr_bits(2:0)" name="i2c_addr_bits(2:0)" />
            <blockpin signalname="XLXN_1" name="i2c_RW" />
            <blockpin signalname="XLXN_2" name="addr_ack" />
            <blockpin signalname="XLXN_28" name="slave_ack" />
            <blockpin signalname="XLXN_3" name="data_ack" />
            <blockpin signalname="XLXN_27" name="stop_out" />
            <blockpin signalname="XLXN_5(10:0)" name="i2c_addr(10:0)" />
            <blockpin signalname="XLXN_6(7:0)" name="serial_data(7:0)" />
        </block>
        <block symbolname="bufh" name="XLXI_4">
            <blockpin signalname="Clock" name="I" />
            <blockpin signalname="XLXN_63" name="O" />
        </block>
        <block symbolname="bufh" name="XLXI_5">
            <blockpin signalname="Reset" name="I" />
            <blockpin signalname="XLXN_24" name="O" />
        </block>
        <block symbolname="Serializer" name="XLXI_7">
            <blockpin signalname="XLXN_67" name="i2c_scl" />
            <blockpin signalname="XLXN_68" name="i2c_sda" />
            <blockpin signalname="XLXN_3" name="data_ack" />
            <blockpin signalname="XLXN_28" name="slave_ack" />
            <blockpin signalname="XLXN_2" name="addr_ack" />
            <blockpin signalname="XLXN_63" name="Clock" />
            <blockpin signalname="XLXN_24" name="reset" />
            <blockpin signalname="i2c_xfc_read" name="i2c_xfc_read" />
            <blockpin signalname="XLXN_27" name="stop_in" />
            <blockpin signalname="i2c_rdata(7:0)" name="i2c_rdata(7:0)" />
            <blockpin signalname="i2c_SDA_out" name="i2c_sda_out" />
        </block>
        <block symbolname="bufh" name="XLXI_13">
            <blockpin signalname="i2c_SCL" name="I" />
            <blockpin signalname="XLXN_67" name="O" />
        </block>
        <block symbolname="bufh" name="XLXI_14">
            <blockpin signalname="i2c_SDA_in" name="I" />
            <blockpin signalname="XLXN_68" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="2208" y="1408" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1344" y="1392" name="XLXI_2" orien="R0">
        </instance>
        <branch name="XLXN_1">
            <wire x2="2016" y1="976" y2="976" x1="1840" />
            <wire x2="2016" y1="976" y2="992" x1="2016" />
            <wire x2="2208" y1="992" y2="992" x1="2016" />
        </branch>
        <branch name="XLXN_2">
            <wire x2="2064" y1="1856" y2="1856" x1="1440" />
            <wire x2="2016" y1="1040" y2="1040" x1="1840" />
            <wire x2="2016" y1="1040" y2="1056" x1="2016" />
            <wire x2="2064" y1="1056" y2="1056" x1="2016" />
            <wire x2="2208" y1="1056" y2="1056" x1="2064" />
            <wire x2="2064" y1="1056" y2="1856" x1="2064" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="2080" y1="1728" y2="1728" x1="1440" />
            <wire x2="2080" y1="1168" y2="1168" x1="1840" />
            <wire x2="2080" y1="1168" y2="1728" x1="2080" />
            <wire x2="2208" y1="1120" y2="1120" x1="2080" />
            <wire x2="2080" y1="1120" y2="1168" x1="2080" />
        </branch>
        <branch name="XLXN_5(10:0)">
            <wire x2="2016" y1="1296" y2="1296" x1="1840" />
            <wire x2="2016" y1="1296" y2="1312" x1="2016" />
            <wire x2="2208" y1="1312" y2="1312" x1="2016" />
        </branch>
        <branch name="XLXN_6(7:0)">
            <wire x2="2016" y1="1360" y2="1360" x1="1840" />
            <wire x2="2016" y1="1360" y2="1376" x1="2016" />
            <wire x2="2208" y1="1376" y2="1376" x1="2016" />
        </branch>
        <branch name="i2c_addr_bits(2:0)">
            <wire x2="1344" y1="1360" y2="1360" x1="1312" />
        </branch>
        <branch name="i2c_op">
            <wire x2="2752" y1="928" y2="928" x1="2720" />
        </branch>
        <branch name="i2c_xfc">
            <wire x2="2752" y1="1072" y2="1072" x1="2720" />
        </branch>
        <branch name="i2c_addr_out(10:0)">
            <wire x2="2752" y1="1216" y2="1216" x1="2720" />
        </branch>
        <branch name="i2c_data_out(7:0)">
            <wire x2="2752" y1="1360" y2="1360" x1="2720" />
        </branch>
        <instance x="1168" y="736" name="XLXI_4" orien="R0">
        </instance>
        <branch name="Clock">
            <wire x2="1168" y1="704" y2="704" x1="1136" />
        </branch>
        <instance x="1168" y="560" name="XLXI_5" orien="R0">
        </instance>
        <branch name="Reset">
            <wire x2="1168" y1="528" y2="528" x1="1136" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="1600" y1="608" y2="608" x1="960" />
            <wire x2="960" y1="608" y2="1072" x1="960" />
            <wire x2="1344" y1="1072" y2="1072" x1="960" />
            <wire x2="960" y1="1072" y2="1472" x1="960" />
            <wire x2="1504" y1="1472" y2="1472" x1="960" />
            <wire x2="1504" y1="1472" y2="1984" x1="1504" />
            <wire x2="1504" y1="1984" y2="1984" x1="1440" />
            <wire x2="1600" y1="528" y2="528" x1="1552" />
            <wire x2="1600" y1="528" y2="608" x1="1600" />
            <wire x2="2176" y1="528" y2="528" x1="1600" />
            <wire x2="2176" y1="528" y2="1184" x1="2176" />
            <wire x2="2208" y1="1184" y2="1184" x1="2176" />
        </branch>
        <branch name="XLXN_27">
            <wire x2="1904" y1="2112" y2="2112" x1="1440" />
            <wire x2="2016" y1="1232" y2="1232" x1="1840" />
            <wire x2="2016" y1="1232" y2="1248" x1="2016" />
            <wire x2="2208" y1="1248" y2="1248" x1="2016" />
            <wire x2="2016" y1="1248" y2="1248" x1="1904" />
            <wire x2="1904" y1="1248" y2="2112" x1="1904" />
        </branch>
        <branch name="XLXN_28">
            <wire x2="1968" y1="1792" y2="1792" x1="1440" />
            <wire x2="1968" y1="1104" y2="1104" x1="1840" />
            <wire x2="1968" y1="1104" y2="1792" x1="1968" />
        </branch>
        <iomarker fontsize="28" x="1312" y="1360" name="i2c_addr_bits(2:0)" orien="R180" />
        <iomarker fontsize="28" x="2752" y="928" name="i2c_op" orien="R0" />
        <iomarker fontsize="28" x="2752" y="1072" name="i2c_xfc" orien="R0" />
        <iomarker fontsize="28" x="2752" y="1216" name="i2c_addr_out(10:0)" orien="R0" />
        <iomarker fontsize="28" x="2752" y="1360" name="i2c_data_out(7:0)" orien="R0" />
        <iomarker fontsize="28" x="1136" y="704" name="Clock" orien="R180" />
        <iomarker fontsize="28" x="1136" y="528" name="Reset" orien="R180" />
        <instance x="336" y="1296" name="XLXI_13" orien="R0">
        </instance>
        <iomarker fontsize="28" x="992" y="1600" name="i2c_SDA_out" orien="R180" />
        <branch name="i2c_SCL">
            <wire x2="336" y1="1264" y2="1264" x1="304" />
        </branch>
        <iomarker fontsize="28" x="304" y="1264" name="i2c_SCL" orien="R180" />
        <branch name="i2c_rdata(7:0)">
            <wire x2="1472" y1="2176" y2="2176" x1="1440" />
        </branch>
        <iomarker fontsize="28" x="1472" y="2176" name="i2c_rdata(7:0)" orien="R0" />
        <branch name="i2c_xfc_read">
            <wire x2="1472" y1="2048" y2="2048" x1="1440" />
        </branch>
        <iomarker fontsize="28" x="1472" y="2048" name="i2c_xfc_read" orien="R0" />
        <branch name="i2c_SDA_in">
            <wire x2="336" y1="1056" y2="1056" x1="304" />
        </branch>
        <instance x="336" y="1088" name="XLXI_14" orien="R0">
        </instance>
        <iomarker fontsize="28" x="304" y="1056" name="i2c_SDA_in" orien="R180" />
        <branch name="XLXN_63">
            <wire x2="1872" y1="816" y2="816" x1="1280" />
            <wire x2="1872" y1="816" y2="928" x1="1872" />
            <wire x2="2128" y1="928" y2="928" x1="1872" />
            <wire x2="2128" y1="928" y2="1936" x1="2128" />
            <wire x2="2144" y1="1936" y2="1936" x1="2128" />
            <wire x2="2208" y1="928" y2="928" x1="2128" />
            <wire x2="1280" y1="816" y2="976" x1="1280" />
            <wire x2="1344" y1="976" y2="976" x1="1280" />
            <wire x2="2144" y1="1920" y2="1920" x1="1440" />
            <wire x2="2144" y1="1920" y2="1936" x1="2144" />
            <wire x2="1872" y1="704" y2="704" x1="1552" />
            <wire x2="1872" y1="704" y2="816" x1="1872" />
        </branch>
        <branch name="i2c_SDA_out">
            <wire x2="1008" y1="1600" y2="1600" x1="992" />
            <wire x2="1024" y1="1600" y2="1600" x1="1008" />
        </branch>
        <instance x="1440" y="2208" name="XLXI_7" orien="M0">
        </instance>
        <branch name="XLXN_67">
            <wire x2="768" y1="1264" y2="1264" x1="720" />
            <wire x2="1344" y1="1264" y2="1264" x1="768" />
            <wire x2="768" y1="1264" y2="1456" x1="768" />
            <wire x2="1600" y1="1456" y2="1456" x1="768" />
            <wire x2="1600" y1="1456" y2="1600" x1="1600" />
            <wire x2="1600" y1="1600" y2="1600" x1="1440" />
        </branch>
        <branch name="XLXN_68">
            <wire x2="864" y1="1056" y2="1056" x1="720" />
            <wire x2="944" y1="1056" y2="1056" x1="864" />
            <wire x2="944" y1="1056" y2="1168" x1="944" />
            <wire x2="1344" y1="1168" y2="1168" x1="944" />
            <wire x2="864" y1="1056" y2="1440" x1="864" />
            <wire x2="1648" y1="1440" y2="1440" x1="864" />
            <wire x2="1648" y1="1440" y2="1664" x1="1648" />
            <wire x2="1648" y1="1664" y2="1664" x1="1440" />
        </branch>
    </sheet>
</drawing>
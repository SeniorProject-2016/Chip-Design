<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="12008004">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="NI.SortType" Type="Int">3</Property>
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Generate Data" Type="Folder">
			<Item Name="I2S_GenerateAnalogData.vi" Type="VI" URL="../VIs/Encode/I2S_GenerateAnalogData.vi"/>
		</Item>
		<Item Name="I2S" Type="Folder">
			<Item Name="Encode" Type="Folder">
				<Item Name="I2S_BufferConfiguration.vi" Type="VI" URL="../VIs/Encode/I2S_BufferConfiguration.vi"/>
				<Item Name="I2S_GenerateData.vi" Type="VI" URL="../VIs/Encode/I2S_GenerateData.vi"/>
				<Item Name="I2S_Encode.vi" Type="VI" URL="../VIs/Encode/I2S_Encode.vi"/>
			</Item>
			<Item Name="Decode" Type="Folder">
				<Item Name="I2S_Decode.vi" Type="VI" URL="../VIs/Decode/I2S_Decode.vi"/>
				<Item Name="I2S_Decode_Formated_Data.vi" Type="VI" URL="../VIs/Decode/I2S_Decode_Formated_Data.vi"/>
				<Item Name="I2S_ConvertToAnalogData.vi" Type="VI" URL="../VIs/Decode/I2S_ConvertToAnalogData.vi"/>
				<Item Name="I2S_RemoveDataOversampling.vi" Type="VI" URL="../VIs/Decode/I2S_RemoveDataOversampling.vi"/>
			</Item>
		</Item>
		<Item Name="Type Def" Type="Folder">
			<Item Name="Configuration Data.ctl" Type="VI" URL="../VIs/Type Defs/Configuration Data.ctl"/>
			<Item Name="I2S Parameters.ctl" Type="VI" URL="../VIs/Type Defs/I2S Parameters.ctl"/>
		</Item>
		<Item Name="Benchmarks" Type="Folder">
			<Item Name="Decode I2S Data Benchmark.vi" Type="VI" URL="../VIs/Benchmarks/Decode I2S Data Benchmark.vi"/>
			<Item Name="Encode I2S Data Benchmark.vi" Type="VI" URL="../VIs/Benchmarks/Encode I2S Data Benchmark.vi"/>
		</Item>
		<Item Name="I2S_Encode_Decode.vi" Type="VI" URL="../VIs/I2S_Encode_Decode.vi"/>
		<Item Name="I2S_Encode_Decode with Digital Graph.vi" Type="VI" URL="../VIs/I2S_Encode_Decode with Digital Graph.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="NI_AALBase.lvlib" Type="Library" URL="/&lt;vilib&gt;/Analysis/NI_AALBase.lvlib"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="DTbl Digital Size.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DTblOps.llb/DTbl Digital Size.vi"/>
				<Item Name="DTbl Compress Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DTblOps.llb/DTbl Compress Digital.vi"/>
				<Item Name="DWDT Compress Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/DWDT Compress Digital.vi"/>
				<Item Name="Compress Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDT.llb/Compress Digital.vi"/>
				<Item Name="DTbl Binary U8 to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DTblOps.llb/DTbl Binary U8 to Digital.vi"/>
				<Item Name="DWDT Binary U8 to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/DWDT Binary U8 to Digital.vi"/>
				<Item Name="DTbl Binary U16 to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DTblOps.llb/DTbl Binary U16 to Digital.vi"/>
				<Item Name="DWDT Binary U16 to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/DWDT Binary U16 to Digital.vi"/>
				<Item Name="DTbl Binary U32 to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DTblOps.llb/DTbl Binary U32 to Digital.vi"/>
				<Item Name="DWDT Binary U32 to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/DWDT Binary U32 to Digital.vi"/>
				<Item Name="Binary to Digital.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDT.llb/Binary to Digital.vi"/>
				<Item Name="DWDT Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/DWDT Error Code.vi"/>
				<Item Name="DTbl Digital Signal Subset.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DTblOps.llb/DTbl Digital Signal Subset.vi"/>
				<Item Name="Digital Signal Subset Attributes.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/Digital Signal Subset Attributes.vi"/>
				<Item Name="DWDT Digital Signal Subset.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDTOps.llb/DWDT Digital Signal Subset.vi"/>
				<Item Name="Digital Signal Subset.vi" Type="VI" URL="/&lt;vilib&gt;/Waveform/DWDT.llb/Digital Signal Subset.vi"/>
			</Item>
			<Item Name="lvanlys.dll" Type="Document" URL="/&lt;resource&gt;/lvanlys.dll"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
